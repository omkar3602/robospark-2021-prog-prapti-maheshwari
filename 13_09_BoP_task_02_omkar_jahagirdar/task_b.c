/***************************
 * Name: Omkar Jahagirdar
 * PRN: 12011016
 * B.
Code for dynamic array using malloc/calloc, take size from user take data inputs, print them, again take size from user and realloc with new size, take user-data and again print new data.
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *ptr, i;

    printf("Enter n:"); //Input value of n
    scanf("%d",&n);

    ptr = (int *)malloc(n * sizeof(int)); //Dynamically allocating memory

    for(i = 0; i < n; i++)
    {
        // Input elements from user
        printf("\nEnter element:");
        scanf("%d", ptr + i);
    }

    printf("\nArray: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr +i)); // print out the array


    printf("\n\nEnter new n:"); //Input new value of n
    scanf("%d",&n);

    ptr = (int *)realloc(ptr, n * sizeof(int)); //Reallocating memory

    for(i = 0; i < n; i++)
    {
        // Input new elements from user
        printf("\nEnter new element:");
        scanf("%d", ptr + i);
    }

    printf("\nNew Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(ptr +i)); // print out the new array

    return 0;
}