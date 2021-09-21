#include <iostream>
using namespace std;

// global definiation of structure
struct book
{
    int bookId;
    char title[10];
    float price;
} b2;

book inputData(book);
void showData();
int main()
{
    system("clear");
    book b1;
    b2 = inputData(b1);
    showData();
    return 0;
}
book inputData(book b)
{
    cout << "enter book id, title, price";
    cin >> b.bookId >> b.title >> b.price;
    return (b);
}
void showData()
{
    cout << "\n book id: " << b2.bookId;
    cout << "\n title :" << b2.title;
    cout << "\n price : " << b2.price;
}
