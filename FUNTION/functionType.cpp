#include <iostream>
using namespace std;

// global declaration function

// takes nothing return nothing
void sum();

// takes nothing return something
int sum();

// takes something return nothing
// void sum();

// takes something return something
void sum(int, int);

int main()
{
    system("clear");
    int a = 5, b = 6;

    sum();
    sum(a, b); // actual argument
    cout << sum();

    return 0;
}

void sum()
{
    int a = 15, b = 6;
    cout << a + b << "\n";
}

void sum(int x, int y) //formal argument
{
    cout << x + y;
}

int sum()
{
    int x = 3, y = 5;
    return (x + y);
}
