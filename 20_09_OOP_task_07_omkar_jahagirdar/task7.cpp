/***************************
 * Name: Omkar Jahagirdar
 * PRN: 12011016
 * 
Task 07 - 20/09/2021
Create a class named Box which will have three private memebers length, breadth and height.
1. Provide default and parameterized constructors for the class.
2. Create a public member function getVolume which will calculate the volume of the box.
3. Create getters and setters for each of the attribute of the class and also a member function to print the dimensions of the object.
4. Overload following operators with reference to volume of a box
   a. >
   b. <
   c. <= 
   d. >=
   e. ==
*/
#include<iostream>
using namespace std;

class Box
{
    private:
        float length, breadth, height;
    public:
        Box()
        {
            length = breadth = height = 0;
        }
        Box(float l, float b, float h)
        {
            length = l;
            breadth = b;
            height = h;
        }

        void set_length(float l)
        {
            length = l;
        }
        void set_breadth(float b)
        {
            breadth = b;
        }
        void set_height(float h)
        {
            height = h;
        }

        float get_length()
        {
            return length;
        }
        float get_breadth()
        {
            return breadth;
        }
        float get_height()
        {
            return height;
        }

        void printDimensions()
        {
            cout << "\nLength = " << length;
            cout << "\nBreadth = " << breadth;
            cout << "\nHeight = " << height;
            cout << "\nVolume = " << this->getVolume();
        }

        float getVolume()
        {
            return length * breadth * height;
        }

        bool operator>(Box b)
        {
            if(this->getVolume() > b.getVolume())
                return true;
            return false;
        }
        bool operator<(Box b)
        {
            if(this->getVolume() < b.getVolume())
                return true;
            return false;
        }
        bool operator<=(Box b)
        {
            if(this->getVolume() <= b.getVolume())
                return true;
            return false;
        }
        bool operator>=(Box b)
        {
            if(this->getVolume() >= b.getVolume())
                return true;
            return false;
        }
        bool operator==(Box b)
        {
            if(this->getVolume() == b.getVolume())
                return true;
            return false;
        }

};

int main()
{
    Box box1, box2;
    float l, b, h;
    
    cout << "\nEnter length of box1: ";
    cin >> l;
    box1.set_length(l);

    cout << "Enter breadth of box1: ";
    cin >> b;
    box1.set_breadth(b);

    cout << "Enter height of box1: ";
    cin >> h;
    box1.set_height(h);



    cout << "\nEnter length of box2: ";
    cin >> l;
    box2.set_length(l);

    cout << "Enter breadth of box2: ";
    cin >> b;
    box2.set_breadth(b);

    cout << "Enter height of box2: ";
    cin >> h;
    box2.set_height(h);


    cout << "\nBox 1: ";
    box1.printDimensions();

    cout << "\n\nBox 2: ";
    box2.printDimensions();

    if(box1 > box2)
        cout << "\n\nVolume of box1 is greater than volume of box2.\n";
    else if(box1 < box2)
        cout << "\n\nVolume of box2 is greater than volume of box1.\n";
    else if(box1 == box2)
        cout << "\n\nVolume of box1 is equal to the volume of box2.\n";

    return 0;
}