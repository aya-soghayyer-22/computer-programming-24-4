#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 

 double pi=0;
	int k;
	for(k=0;k<20;k++)
		pi = pi + pow(-1,k)/(2*k+1);
	pi = pi*4;
	cout << "PI= " << pi << endl;
    return 0;
}