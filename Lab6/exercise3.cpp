#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin; 
char x; 
int choice; 
do {
	system("cls"); 
	cout << "1- capitals & smals\n"; 
	cout << "2- Vowels & consonants\n"; 
	cout << "3- Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;
	fin.open("letter.txt"); 
	if (!fin) {
		cout << "File not found\n";
		return 0; 
	}
	switch (choice) {
	case 1:
	{
		int cap = 0, sm = 0; 
		fin >> x; 
		while (fin) {
			if (x >= 'A' && x < 'Z')
				cap++; 
			else if (x >= 'a' && x < 'z')
				sm++;
			fin >> x; 
		}
		fin.close();
		cout << "The Number of capital letters: " << cap << endl;
		cout << "The number of small letters: " << sm << endl;
		system("puase"); 
		break;
	}
	case 2:
	{
		int vow = 0, con = 0;
		fin >> x;
		while (fin) {
			if (x == 'a' || x == 'A'|| x == 'e' || x == 'E'|| x == 'o' || x == 'O' ||
				x == 'i' || x == 'I'|| x == 'u' || x == 'U')
				vow++;
			else if (x >= 'a' && x < 'z' || x >= 'A' && x < 'Z')
				con++;
			fin >> x;
		}
		fin.close();
		cout << "The Number of vowel letters: " << vow << endl;
		cout << "The number of consonant letters: " << con << endl;
		break; 
	}
	default: {
		cout << "Invalid input\n"; 
		break; 
	}

	}
	
} while (choice != 3);
	
	system("pause");
	return 0;
}
