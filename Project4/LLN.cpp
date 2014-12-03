#include <cstdlib>
#include <string>
#include <iostream>
#include "LL.h"
#include "LLN.h"

using namespace std;


LLN::LLN(string s) {
	cout << "stuff";
	S = s;
	cout << "things";
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

void LLN::addTitle(string s, LLN *prev, LL *l) {
	if (s == S)
		return;
	else if (s < S) {
		LLN *t = new LLN(s);
		t->setNext(this);
		if (prev)
			prev->setNext(t);
		else
			l->setHead(t);
	}
	else if (next)
		next->addTitle(s,this,l);
	else
		setNext(s);
}

void LLN::print() {
	cout << S << endl;
	if (next)
		next->print();
} 

void LLN::removeTitle(string s, LLN *prev, LL *l) {
	if (checkForSub(S,s,0)) {
		if (prev)
			prev->setNext(next);
		else
			l->setHead(next);
		next = NULL;
		delete this;
		if (prev)
			prev->removeTitle(s,NULL,l);
		else
			l->removeTitle(s);
	}
	else if (next)
		next->removeTitle(s,this,l);
}

bool LLN::checkForSub(string s, string q, long long c)	{
	bool a = false;
	if (c + q.length() < s.length())
		if (s.substr(c,q.length()) == q)
			a = true;
		else
			a = checkForSub(s,q,c+1);
	return a;
}
