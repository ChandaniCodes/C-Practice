#include <iostream> //declaration of function, object etc
// #include <conio.h>
using namespace std;

int main()
{
    system("clear");
    // ordinary variable
    int x = 4;
    cout << x << "\n";
    // pointer variable
    int *pointer;
    pointer = &x;
    cout << pointer;
    // reference variable
    int &ref = x;
    cout << "\n"
         << ref;
    ref++;
    cout << ref;

    return 0;
}