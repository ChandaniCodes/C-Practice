
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
    friend Complex operator-(Complex);
};
Complex operator-(Complex X)
{
    Complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return (temp);
}
int main()
{
    system("clear");
    Complex c1, c3;
    c1.GetData(2, 3);

    /*
        work as c3= operator-(c1);
        called operator- (uniary) and passed c1 as argu then return operator- funtion and assigned into c3.
    */
    c3 = -c1;
    /*
        but normally work as c1 called operator- but no argu is passed and then returned c1 something which assigned into c3.
    */
    c3.showData();
    return 0;
}