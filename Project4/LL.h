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
	void addTitle(string s);
	void print();
	void removeTitle(string s);
};


#endif
