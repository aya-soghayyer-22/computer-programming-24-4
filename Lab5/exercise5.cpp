#include <iostream>

using namespace std;

int main()
{ 
    // if you want to learn more explore this link: https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
    // Short Hand If...Else (Ternary Operator)
    // Short Hand structur: variable = (condition) ? expressionTrue : expressionFalse;

    int num1 , num2, min; 
    cout << "Enter a 2 numbers" << endl;
    cin >> num1 >> num2; 
    min=num1<num2? num1:num2; 
    cout <<"Min = "<< min << endl; 
    return 0;
}