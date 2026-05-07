#include <iostream>

using namespace std;

int main()
{
    int n, m;
    float mark, sum, avg, sumOfAvg;
    cout << "Enter the number of students: ";
    cin >> n;
    cout << "Enter the number of marks for each student: ";
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j <= m; j++)
        {
            cout << "Enter mark " << j << " for student " << i << ": ";
            cin >> mark;
            sum += mark;
        }
        cout << "------------------------------" << endl;
        avg = sum / m;
        sumOfAvg += avg;
    }
    cout << "The class avg is: " << sumOfAvg / n;
    return 0;
}