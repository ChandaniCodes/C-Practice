#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void GetData(int x, int y)
    {
        a = x;
        b = y;
    }
    void ShowData()
    {
        cout << a << " " << b;
    }
    // operator overloading
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main()
{
    system("clear");
    Complex c1, c2, c3;
    c1.GetData(2, 3);
    c2.GetData(3, 4);
    c3 = c1 + c2; // c1 called + operator and c2 pass as argument
    c3.ShowData();
    return 0;
}