#ifndef _LLN_
#define _LLN_

#include <cstdlib>
#include <string>
#include <iostream>
#include "LL.h"

using namespace std;

class LL;
class LLN {
private:
	LLN *next;
	string S;
public:
	LLN(string s);
	~LLN();
	LLN * getNext();
	void setNext(string s);
	void setNext(LLN *n);
	string addTitle(string s, LLN *prev, LL *l);
	void print();
	string removeTitle(string s, LLN *prev, LL *l);
	bool checkForSub(string s, string q, long long c);
};

#endif
