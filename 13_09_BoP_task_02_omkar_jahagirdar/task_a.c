/***************************
 * Name: Omkar Jahagirdar
 * PRN: 12011016
 * A.
Create a structure to specify data of customers in a bank. The data to be stored is: Account number, name and balance in account. Assume maximum of 10 customers in the bank.
a. Write a function to print the Account number and name of each customer with balance below Rs. 100.
b. If a customer requests for withdrawal or deposit, it is given in the form:
        Name, Account No., updated amount, amount withdrawn/deposited, code (1 for deposit, 0 for withdrawal)
        Also program to give a message "The balance is insufficient for the specified withdrawal." if transaction is not     possible.
The program should be menu driven, functional and without code redundancy.
 * 
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct customer
{
    int account_no;
    char name[50];
    float balance;
};

void mainmenu(struct customer *cust);
void balance_lessthan_100(struct customer *cust);
void withdrawal(struct customer *cust);
void deposit(struct customer *cust);
void repeat();

int i, firstrun = 1;
struct customer cust[10];



int main()
{
    // Only initialize the customers if the program is running for the fisrt time
    if(firstrun == 1)
    {
        char name[8];
        for(i = 0; i < 10; i++)
        {
            cust[i].account_no = i+1;

            snprintf(name, 8, "Dummy%d", i+1);
            strcpy(cust[i].name , name);

            cust[i].balance = 1000;
        }  

        cust[6].balance = 87;
        cust[8].balance = 99;

        firstrun = 0;

        // print all customer details
        // for(i = 0; i < 10; i++)
        //     printf("\n%d %s %.2f", cust[i].account_no, cust[i].name, cust[i].balance);
    }

    printf("\nHello! Welcome to ABC Bank");
    mainmenu(cust);

    repeat(); // After execution of one task, this function asks the user if he/she wants to perform another task

    return 0;
}

void mainmenu(struct customer *cust)
{
    int choice;
    // Ask the user their choice and call the respective function 
    printf("\n\n1. Print Account number and name of each customer with balance below Rs. 100");
    printf("\n2. Withdraw money");
    printf("\n3. Deposit money"); 
    printf("\n\nChoose service:");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        balance_lessthan_100(cust);
        break;
    case 2:
        withdrawal(cust);
        break;
    case 3:
        deposit(cust);
        break;
    default:
        printf("\nPlease enter correct choice");
        mainmenu(cust);
        break;
    }
}

void balance_lessthan_100(struct customer *cust)
{
    for(i = 0; i < 10; i++)
    {
        if(cust[i].balance < 100)
        {
            printf("\n%d %s", cust[i].account_no, cust[i].name);
        }
    }
}

void withdrawal(struct customer *cust)
{
    int acc_no, flag = 0;
    float amount;
    printf("\nEnter Account number:");
    scanf("%d", &acc_no);
    printf("Enter amount to withdraw:");
    scanf("%f", &amount);

    for(i = 0; i < 10; i++)
    {
        if(cust[i].account_no == acc_no)
        {
            flag = 1; // If account number is valid, set the flag
            if(cust[i].balance >= amount) // Checks if user has sufficient balance
            {
                cust[i].balance -= amount;
                printf("\nTransaction successful!");
                printf("\n%s, %d, %.2f, %.2f, %d", cust[i].name, cust[i].account_no, cust[i].balance, amount, 0);
            }
            else
            {
                printf("\nThe balance is insufficient for the specified withdrawal.");
            }
        }
    }
    if(flag == 0)
    {
        printf("\nInvalid Account number.");
    }
}

void deposit(struct customer *cust)
{
    int acc_no, flag = 0;
    float amount;
    printf("\nEnter Account number:");
    scanf("%d", &acc_no);
    printf("Enter amount to deposit:");
    scanf("%f", &amount);

    for(i = 0; i < 10; i++)
    {
        if(cust[i].account_no == acc_no) 
        {    
            flag = 1; // If account number is valid, set the flag
            cust[i].balance += amount;
            printf("\nTransaction successful!");
            printf("\n%s, %d, %.2f, %.2f, %d", cust[i].name, cust[i].account_no, cust[i].balance, amount, 1);    
        }
    }
    if(flag == 0)
    {
        printf("\nInvalid Account number.");
    }
}

void repeat()
{
    // A recursive function that enables the user to perform multiple tasks in one execution
    char choice;

    printf("\n\nDo you want to continue?[y/n]:");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'y':
        main();
        break;
    case 'n':
        exit(0);
    default:
        printf("\nPlease enter correct choice[y/n]");
        repeat();
        break;
    }
}