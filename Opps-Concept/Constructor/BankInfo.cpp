#include <iostream>
using namespace std;
#include <string.h>

class BankInfo
{
private:
    int bankId;
    char bankName[20];

public:
    // constructor
    BankInfo()
    {
        bankId = 1;
        strcpy(bankName, "indian bank");
    }
    void ShowData()
    {
        cout << "Bank Id: " << bankId;
        cout << "\nBank name: " << bankName;
    }
};

int main()
{
    system("clear");
    BankInfo b1;
    b1.ShowData();
    return 0;
}