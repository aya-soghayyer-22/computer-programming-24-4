#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	char x;
	int choice;
	cout << "1- Capitals & smalls\n"
		 <<	"2- Vowels & consonants\n"
		 <<	"3- Exit\n"
		 <<	"Enter your choice: ";	
	cin >> choice;
	fin.open("data.txt");
	if(!fin) {
		cout << "file not found!\n";
		system("pause");
		return 0;
	}
	switch(choice) {
	case 1:
		{
		int cap=0,small=0;
		fin >> x;
		while(fin) {
			if(x >= 'A' && x <= 'Z')
				cap++;
			else if(x >= 'a' && x <='z')
				small++;
			fin >> x;
		}
		fin.close();
		cout << "number of capital letters: " << cap << endl;
		cout << "number of small letters: " << small << endl;
		break;
		}
	case 2:
		{
		int vol=0,con=0;
		fin >> x;
		while(fin) {
			if(x == 'a' || x == 'A' || x == 'e' || x == 'E'
				|| x == 'i' || x == 'I' || x == 'o' || x == 'O'
				|| x == 'u' || x == 'U')
				vol++;
			else if(x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
				con++;
			fin >> x;
		}
		fin.close();
		cout << "number of vowel letters: " << vol << endl;
		cout << "number of consonant letters: " << con << endl;
		break;
		}
	case 3: break;
	default: cout << "invalid input\n";

	}
	
	system("pause");
	return 0;
}
