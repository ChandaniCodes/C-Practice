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
    ~Complex()
    {
        cout << "\ndestructor called";
    }
};

int main()
{
    system("clear");
    Complex c1; //default constructor
    return 0;
}