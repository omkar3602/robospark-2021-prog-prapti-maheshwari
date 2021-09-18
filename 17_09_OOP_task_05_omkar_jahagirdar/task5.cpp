/***************************
 * Name: Omkar Jahagirdar
 * PRN: 12011016
 * 
Task 05 (17/09/2021)
Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
1 - having no parameter - values of both length and breadth are assigned zero.
2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
Use getter and setter functions for each attribute of the class.
*/

#include<iostream>
using namespace std;

class Rectangle
{
    private:
        double length, breadth;

    public:
        Rectangle()
        {
            length = breadth = 0;
        }

        Rectangle(double l, double b)
        {
            length = l;
            breadth = b;
        }

        Rectangle(double common)
        {
            length = breadth = common;
        }

        void set_length(double l)
        {
            length = l;
        }

        void set_breadth(double b)
        {
            breadth = b;
        }

        double calculate_area()
        {
            return length * breadth;
        }

        int get_length()
        {
            return length;
        }

        int get_breadth()
        {
            return breadth;
        }
};

int main()
{
    Rectangle r1;  // no parameter constructor

    Rectangle r2(10,20);  // two parameter constructor
    
    Rectangle r3(30);  // one parameter constructor

    cout << "\nThe area of r1 is " << r1.calculate_area() << endl; // calculating area of r1

    cout << "\nThe area of r2 is " << r2.calculate_area() << endl; // calculating area of r2

    cout << "\nThe area of r3 is " << r3.calculate_area() << endl; // calculating area of r3

    Rectangle r4;

    r4.set_length(4);   // using setter method
    r4.set_breadth(3);  // using setter method

    cout << "\n\nThe length of r4 is " << r4.get_length() << endl;  // using getter method
    cout << "\nThe breadth of r4 is " << r4.get_breadth() << endl;  // using getter method
    cout << "\nThe area of r4 is " << r4.calculate_area() << endl;  // calculating area of r4

    return 0;
}