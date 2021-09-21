#include <iostream>
#include <string.h>
using namespace std;

class CollegeInfo
{
private:
    // static member variable or class member variable
    static int collegeId; // declaration
    // instance member variable
    int studentId;

public:
    void SetData()
    {
        cout << "enter student id: ";
        cin >> studentId;
    }
    void ShowData()
    {
        cout << "\n student id: " << studentId;
    }
    //  can only access static members of the class
    static void GetData(int x)
    {
        if (x == 0)
        {
            cout << "\ncalled without creating object";
        }
        else
        {
            cout << "\ncalled with creating object";
        }
        cout << "\n college id: " << collegeId;
    }
};
// CollegeInfo::    called membership label
int CollegeInfo::collegeId = 20; // creating collegeId variable and default value is zero

int main()
{
    system("clear");
    CollegeInfo c1;
    c1.SetData();
    c1.ShowData();

    // calling with creating object
    c1.GetData(1);

    // calling without creating object
    CollegeInfo::GetData(0);
    return 0;
}