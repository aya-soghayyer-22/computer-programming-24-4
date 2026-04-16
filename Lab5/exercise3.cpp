#include <iostream>

using namespace std;

int main()
{
    int a, b, c, min, max; 
    cout << "Enter 3 number " << endl;
    cin >> a >> b >> c; 
    max = a; 
    min = a; 
    if (b > max) 
        max = b; 
    if (c > max)
        max = c; 
    if (b < min) 
        max = b; 
    if (c < min)
        max = c; 
    cout << "The maximum is " << max << endl;
    cout << "The minimum is " << min << endl; 
    return 0;
}