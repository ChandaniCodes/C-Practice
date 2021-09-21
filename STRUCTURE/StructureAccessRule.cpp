#include <iostream>
using namespace std;

// global definiation of structure
struct book
{
private:
    int bookId;
    char title[10];
    float price;

public:
    void inputData()
    {
        cout << "enter book id, title, price";
        cin >> bookId >> title >> price;
    }
    void showData()
    {
        cout << "\n book id: " << bookId;
        cout << "\n title :" << title;
        cout << "\n price : " << price;
    }
};

int main()
{
    system("clear");
    book b1;
    // b1.bookId = 100;  not accessiable bcz its private
    b1.inputData();
    b1.showData();
    return 0;
}
