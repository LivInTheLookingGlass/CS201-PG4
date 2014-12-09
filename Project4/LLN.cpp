#include <cstdlib>
#include <string>
#include <iostream>
#include "LL.h"
#include "LLN.h"

using namespace std;


LLN::LLN(string s) {
	S = s;
	next = NULL;
}

LLN::~LLN() {
	delete next;
}

LLN * LLN::getNext() {
	return next;
}

void LLN::setNext(string s) {
	next = new LLN(s);
}

void LLN::setNext(LLN *n) {
	next = n;
}

string LLN::addTitle(string s, LLN *prev, LL *l) {
	if (s == S)
		return s;
	else if (s < S) {
		LLN *t = new LLN(s);
		t->setNext(this);
		if (prev)
			prev->setNext(t);
		else
			l->setHead(t);
		return s;
	}
	else if (next)
		return next->addTitle(s,this,l);
	else	{
		setNext(s);
		return s;
	}
}

void LLN::print() {
	cout << S << endl;
	if (next)
		next->print();
} 

string LLN::removeTitle(string s, LLN *prev, LL *l) {
	if (checkForSub(S,s,0)) {
		if (prev)
			prev->setNext(next);
		else
			l->setHead(next);
		next = NULL;
		delete this;
		if (prev)
			return prev->removeTitle(s,NULL,l);
		else
			return l->removeTitle(s);
		return s;
	}
	else if (next)
		return next->removeTitle(s, this, l);
	else
		return "ERROR";
}

bool LLN::checkForSub(string s, string q, long long c)	{
	bool a = false;
	if (s == q)
		return true;
	if (c + q.length() < s.length() && !a)
		a = (s.substr(c, q.length()) == q);
	if (!a)
		a = checkForSub(s,q,c+1);
	return a;
}
