#include <iostream>
using namespace std;
int sum(int, int);
int main()
{
    system("clear");
    int a = 4, b = 5;
    cout << sum(a, b);
    return 0;
}
int sum(int x, int y) //call by value
{
    return (x + y);
}