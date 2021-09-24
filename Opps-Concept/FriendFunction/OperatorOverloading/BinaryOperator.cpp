
/* overloading of operator as a friend function */

/* friend function takes 1 extra argument compare to member function of a class in overloading of operator */
/*   ex- if member function takes 1 argu then friend function takes 2 argu in overloading of operator */

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
    void showData()
    {
        cout << a << " " << b;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a + Y.a;
    temp.b = X.b + Y.b;
    return (temp);
}
int main()
{
    system("clear");
    Complex c1, c2, c3;
    c1.GetData(2, 3);
    c2.GetData(4, 5);
    /*
        work as c3= operator+ (c1,c2);
        called operator+ and passed c1,c2 as argu then return operator+ funtion and assigned into c3.
    */
    c3 = c1 + c2; //
    //
    c3.showData();
    return 0;
}