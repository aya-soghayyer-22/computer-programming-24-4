#include <iostream>
using namespace std;

int main(){
	const int SIZE = 10;
	int arr[SIZE];
	cout << "Enter 10 integers: ";
	for(int i=0;i<SIZE;i++)
	{
		cin >> arr[i];
	}
	int max_index=0,min_index=0;
	for(int i=1;i<SIZE;i++)
	{
		if(arr[i] > arr[max_index])
			max_index = i;
		if(arr[i] < arr[min_index])
			min_index = i;
	}
	cout << "Maximum= " << arr[max_index] << ", its index= " << max_index << endl;
	cout << "Minimum= " << arr[min_index] << ", its index= " << min_index << endl;
	system("pause");
	return 0;
}