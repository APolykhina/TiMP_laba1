

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int i = 1;
	int count = 1;
	string name1;
	string name2;
	cin >> name1;
	cin >> name2;

	ifstream F1(name1);
	ifstream F2(name2);

	while (!F1.eof() || !F2.eof()) {
		string s1, s2;
		getline(F1, s1);
		getline(F2, s2);
		if (s1 != s2) {
			cout << count << " difference"  <<endl;
			cout << name1 << " " << i << " " << s1 << endl;
			cout << name2 << " " << i << " " << s2 << endl;
			cout << endl;
			count++;

		}
		i++;
	}

	F1.close();
	F2.close();
	system("pause");
	return 0;
}