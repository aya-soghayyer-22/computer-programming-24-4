#include <iostream>

using namespace std;

int main()
{
    int num; 
    bool res; 
    cout << "Enter a number " << endl;
    cin >> num; 
// Using if
    // if ( num % 2 == 0 )
    //     cout << "Even"; 
    // else cout << "Odd"; 

// Using switch
    res = num%2; 
    switch(res){
        case 0:
            cout << "Even" << endl;
            break;
        //  or you can just put defualt instead of case 1 
        case 1: 
            cout << "Odd" << endl; 
            break; 
    }
    return 0;
}