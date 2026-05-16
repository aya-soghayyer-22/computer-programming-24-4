#include <iostream>
using namespace std;
int count(int arr[],int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	double avg = 1.0*sum/n;
	cout << "Average= " << avg << endl;
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] > avg)
			cnt++;
	}
	return cnt;
}
int main()
{
	const int SIZE = 100;
	int marks[SIZE];
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	cout << "Enter " << n << " marks: ";
	for(int i=0;i<n;i++)
	{
		cin >> marks[i];
	}

	int cnt = count(marks,n);
	cout << "# of studets with mark > average is: " << cnt << endl;

	system("pause");
	return 0;
}