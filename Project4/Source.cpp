#include <cstdlib>
#include <string>
#include <iostream>
#include "Header.h"
#include "LL.h"

using namespace std;


int main()	{
	l = new LL();
	int loopcontrol = 1;
	cout << "Commands: add, remove, print, exit" << endl;
	for (string i = ""; i != "EXIT"; i = getInput());
	cout << "On it, boss!" << endl;
	delete l;
	system("pause");
	return 0;
}

string getInput() {
	cout << "command:" << endl;
	string s;
	getline(cin,s);
	s = getCaps(s);
	if (s == "EXIT")
		return "EXIT";
	else if ((string)s.substr(0,3) == "ADD" && s != "ADD")
		return addTitle((string)s.substr(5, (int)s.length() - 6));
	else if ((string)s.substr(0, 6) == "REMOVE" && s != "REMOVE")
		return removeTitle((string)s.substr(8, (int)s.length() - 9));
	else if (s == "PRINT")	{
		print();
		return "PRINT";
	}
	else {
		cout << endl << "Unknown command or not enough arguments" << endl;
		return "UNKNOWN";
	}
}

string addTitle(string s) {
	return l->addTitle(s);
} 

string removeTitle(string s) {
	return l->removeTitle(s);
}

string print() {
	l->print();
	return "PRINT";
} 

string getCaps(string s) {
	for (int i = 0; i < (int)s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return s;
}
