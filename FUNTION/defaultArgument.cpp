#include <iostream>
using namespace std;

/*default argument - make single function for performing same type of operation
 but can declare by assigning default value in formal argument
 */

int sum(int, int = 0, int = 0);
int main()
{
    system("clear");
    int a, b, c;
    cout << "enter 3 numbers";
    cin >> a >> b >> c;
    cout << "sum: " << sum(a) << "\n";
    cout << "sum: " << sum(a, b) << "\n";
    cout << "sum: " << sum(a, b, c);
    return 0;
}
int sum(int x, int y, int z)
{
    return (x + y + z);
}