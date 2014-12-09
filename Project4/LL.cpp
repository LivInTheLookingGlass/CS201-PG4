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

string LL::addTitle(string s) {
	if (head)
		return head->addTitle(s,NULL,this);
	else	{
		head = new LLN(s);
		return s;
	}
}

void LL::print() {
	if (head)
		head->print();
}

string LL::removeTitle(string s) {
	if (head)
		return head->removeTitle(s,NULL,this);
	return "ERROR";
}
