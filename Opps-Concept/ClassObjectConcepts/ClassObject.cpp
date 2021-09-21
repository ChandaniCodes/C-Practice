#include <iostream>

using namespace std;

class Student
{
private:
    //instance member variable or properties or fields or attributes or data members
    int id;
    char name[20];

public:
    //instance member function or methods or procedures or actions or operations or services
    // bcz without object can`t access
    void UpdateData();
    void SetData()
    {
        cout << "enter id and name: ";
        cin >> id >> name;
    }
    void ShowData()
    {
        cout << "id: " << id << "\nname: " << name;
    }
};
void Student::UpdateData() //instance member function
{
    cout << "enter id and name for updation: ";
    cin >> id >> name;
    ShowData();
    cout << "\nupdated :)";
}
int main()
{
    system("clear");
    Student s1;
    s1.SetData();
    s1.ShowData();
    s1.UpdateData();
}