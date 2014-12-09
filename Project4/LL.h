#ifndef _LL_
#define _LL_

#include <cstdlib>
#include <string>
#include <iostream>
#include "LLN.h"

using namespace std;

class LLN;
class LL {
private:
	LLN *head;
public:
	LL();
	~LL();
	LLN * getHead();
	void setHead(LLN *Head);
	void setHead(string s);
	string addTitle(string s);
	void print();
	string removeTitle(string s);
};


#endif
