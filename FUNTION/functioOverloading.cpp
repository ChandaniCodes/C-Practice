#include <iostream>
using namespace std;

/*
    polymorphism can implement in 3 ways:
    1. FUNCTION OVERLOADING - called compile time polymorphism
    2. OPERATOR OVERLOADING - called compile time polymorphism
    3. VIRTUAL FUNCTION - called run time polymorphism
*/

/*FUNCTION OVERLOADING- it is a way to achieve polymorphism in oops concept.
    -> can give same function name of more than one function which perform similar job in a program  

    HOW FUNCTION OVERLOADING IS RESOLVED?
        -> try to find actual argument exactly matches the parameter type of one the overloaded function.
        -> if no exact is found then c++ tries to find a match through promotion .
            - char, unsigned char, short is promoted to an int.
            - float is promoted to double.
        -> i fno promotion is found , c++ tries to find a match through standard promotion (i.e int-float,char-int and so on...)
 */
float calculateArea(int);
int calculateArea(int, int);

int main()
{
    system("clear");
    int radiusOfCircle, lengthOfRectangle, breadthOfRectangle;
    cout << "enter radius of circle: ";
    cin >> radiusOfCircle;
    cout << "Area of circle : " << calculateArea(radiusOfCircle);

    cout << "\n enter length & breadth of recatngle: ";
    cin >> lengthOfRectangle >> breadthOfRectangle;
    cout << "Area of rectangle : " << calculateArea(lengthOfRectangle, breadthOfRectangle);

    return 0;
}
float calculateArea(int radius)
{
    return (3.14 * radius * radius);
}
int calculateArea(int length, int breadth)
{
    return (length * breadth);
}
