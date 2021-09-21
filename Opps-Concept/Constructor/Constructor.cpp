#include <iostream>
using namespace std;
#include <string.h>

class Complex
{
private:
    int a, b;

public:
    // constructor
    Complex()
    {
        cout << "default constructor called !";
    }
    // also called default constructor
    // Complex()
    // {
    // }
    Complex(int x, int y)
    {
        a = x, b = y;
        cout << "\nparameterized constructor called !";
        cout << a << " " << b;
    }
    Complex(int x)
    {
        a = x;
        cout << "\nparameterized constructor called ! with 1 argument";
        cout << a;
    }
    // copy constructor
    /*
    make reference varaible in formal argument. if make object "c" then will give error bcz recursion will perform 
    -> will create c6 object then c6 will assign in c then will again create object for c2. so its perform recursion here.
    */
    Complex(Complex &c)
    {
        a = c.a;
        b = c.b;
        cout << a << " " << b;
    }
};

int main()
{
    system("clear");
    Complex c1;       //default constructor
    Complex c2(2, 3); //parameterized constructor

    //  or other way of creating constructor

    // Complex c3 = Complex(3, 4); //parameterized constructor
    // Complex c4 = Complex(5);    //parameterized constructor
    // Complex c5 = 7;             //parameterized constructor

    // copy constructor
    Complex c6(c2);
    return 0;
}