#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num; 
    if (num > 0)
        cout << "POSITIVE!"<< endl;
    else if (num < 0)
        cout << "NEGATIVE!" << endl;
    else cout << "ZERO!" << endl;
    return 0;
}