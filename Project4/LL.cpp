#include <cstdlib>
#include <string>
#include <iostream>
#include "LL.h"
#include "LLN.h"

using namespace std;

LL::LL() {
	head = NULL;
}

LL::~LL() {
	delete head;
}

void LL::setHead(LLN *Head)	{
	head = Head;
}

void LL::setHead(string s)	{
	head = new LLN(s);
}

LLN * LL::getHead() {
	return head;
}

void LL::addTitle(string s) {
	cout << "shit";
	if (head)
		head->addTitle(s,NULL,this);
	else
		head = new LLN(s);
}

void LL::print() {
	if (head)
		head->print();
}

void LL::removeTitle(string s) {
	if (head)
		head->removeTitle(s,NULL,this);
}
