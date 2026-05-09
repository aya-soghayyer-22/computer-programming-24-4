#include <iostream>

using namespace std; 

int main() {

    int num, counter = 0; 
    string result; 
    cout << "Enter a number: "; 
    cin >> num; 
    if ( num == 1 ){
        result = " isn't prime a number :("; 
    }
    else {
        for (int i = 2; i<= 9; i++){
            if(num % i == 0)
                counter++; 
        }
         result = counter > 0 ? " isn't a prime number :(": " is a prime number :)";
    }
    cout << num << result << endl;

    return 0;
}