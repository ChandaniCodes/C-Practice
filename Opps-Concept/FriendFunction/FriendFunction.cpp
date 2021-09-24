#include <iostream>
using namespace std;

class FriendFunction
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
    // declaration of friend function
    friend void addNumber(FriendFunction);
};

// definiation of friend function
void addNumber(FriendFunction f)
{
    f.ShowData();
    cout << "\nsum is : " << f.a + f.b;
}
int main()
{
    system("clear");
    FriendFunction f1;
    f1.GetData(2, 3);

    // calling frien function
    addNumber(f1);
    return 0;
}