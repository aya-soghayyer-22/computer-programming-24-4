#include <iostream>
using namespace std;
const int SIZE = 10;
void sort(int arr[])
{
	for(int i=0;i<SIZE;i++)
	{
		int min_index = i;
		for(int j=i+1;j<SIZE;j++)
		{
			if(arr[j] < arr[min_index])
				min_index = j; 
		}
		swap(arr[i],arr[min_index]);
	}
}
int main()
{	
	int arr[SIZE];
	cout << "Enter 10 numbers: ";
	for(int i=0;i<SIZE;i++)
	{
		cin >> arr[i];
	}
	sort(arr);
	cout << "Array after sort:\n";
	for(int i=0;i<SIZE;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}