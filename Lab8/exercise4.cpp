#include <iostream>

using namespace std;

int power(int j, int r){
    int res = 1; 
    for(int i = 0; i <=r; i++){
        res*=i; 
}
    return res; 
}

int sum(int n, int r){
    int res = 0 ; 
    for (int i = 0; i < n; i++ ){
        res+= power(i,r);
    }
    return res; 
}
int main()
{
    int n, r;
    cout << "Enter two numbers for n and r: ";
    cin >> n >> r; 
    cout <<"The sum of the series = " << sum(n,r) << endl;

    return 0;
}