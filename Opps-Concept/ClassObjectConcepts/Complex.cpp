#include <iostream>

using namespace std;

class Complex
{
private:
    int numOne = 3, numTwo = 4;

public:
    Complex add(Complex a)
    {
        Complex temp;
        temp.numOne = numOne + a.numOne;
        temp.numTwo = numTwo + a.numTwo;
        return (temp);
    }
    void SetData(int x, int y)
    {
        numOne = x;
        numTwo = y;
    }
    void ShowData()
    {
        cout << "addition:" << numOne << " + " << numTwo << "i";
    }
};

int main()
{
    system("clear");
    Complex obj1, obj2, obj3;
    obj1.SetData(2, 3);
    obj2.SetData(4, 2);
    obj3 = obj1.add(obj2);
    obj3.ShowData();
}