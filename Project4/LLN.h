//Gabe Appleton
//This is the prototyping file for the Linked List Node

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
	LLN(string s); //constructor
	~LLN(); //destructor
	LLN * getNext(); //returns next node
	void setNext(string s); //sets the next node to a new node with content s
	void setNext(LLN *n); //sets the next node to node n
	string addTitle(string s, LLN *prev, LL *l); //adds a title in value order
	void print(); //prints all nodes
	string removeTitle(string s, LLN *prev, LL *l); //removes a node with a matching substring in its title
	bool checkForSub(string s, string q, long long c); //checks for a matching substring
	string get(); //returns node contents
};

#endif
