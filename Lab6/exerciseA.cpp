#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Extended ASCII Table\n";
    cout << "Value in Decimal \t char"<< endl;
    
    cout << "-----------------------------\n";

    for (int i = 0; i <= 255; i++) {
        cout << setw(3) << i << " \t " << (char)i << endl;
    }

    return 0;
}