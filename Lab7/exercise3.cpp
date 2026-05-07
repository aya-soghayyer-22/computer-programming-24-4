#include <iostream>

using namespace std;

int main()
{
    for (int k = 1; k <= 9; k++)
        cout << "\t" << k;
    cout << endl;
    cout << "---------------------------------------" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << i + 1 << "|";
        for (int j = 0; j < 9; j++)
        {
            cout << "\t" << (j + 1) * (i + 1);
        }
        cout << endl;
    }
    return 0;
}