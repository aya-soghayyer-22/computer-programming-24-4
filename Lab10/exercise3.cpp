#include <iostream>
using namespace std;
void subtotal(float arr[],int size)
{
	for(int i=1;i<size;i++)
	{
		arr[i] = arr[i]+arr[i-1];
	}
}
int main()
{
	const int SIZE = 5;
	float arr[SIZE];
	cout << "Enter 5 numbers: ";
	for(int i=0;i<SIZE;i++)
	{
		cin >> arr[i];
	}
	subtotal(arr,SIZE);
	cout << "Array after subtotal:\n";
	for(int i=0;i<SIZE;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}