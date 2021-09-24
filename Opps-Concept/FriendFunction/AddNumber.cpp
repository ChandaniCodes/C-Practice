#include <iostream>
using namespace std;

/* declaration of class (bcz class B is passing as argument in friend function and it is below to A. so compiler can understand about B)*/
class B;

class A
{
private:
    int a;

public:
    void GetData(int x)
    {
        a = x;
    }
    // declaration of friend function
    friend void addNumber(A, B);
};

class B
{
private:
    int b;

public:
    void GetData(int y)
    {
        b = y;
    }
    // declaration of friend function
    friend void addNumber(A, B);
};

// definiation of friend function
void addNumber(A obj1, B obj2)
{
    cout << "\nsum is : " << obj1.a + obj2.b;
}
int main()
{
    system("clear");
    A obj1;
    B obj2;
    obj1.GetData(2);
    obj2.GetData(3);

    // calling frien function
    addNumber(obj1, obj2);
    return 0;
}