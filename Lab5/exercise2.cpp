#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Enter data: " << endl;
    cin >> c;
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        cout << c << " is Letter" << endl;
    else if (c >= '0' && c <= '9')
        cout << c << " is Digit" << endl;
    else
        cout << c << " is Symbol" << endl;
    return 0;
}