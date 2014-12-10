//Gabe Appleton
//This is the prototyping file for the Linked List

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
	LL(); //constructor
	~LL(); //destructor
	LLN * getHead(); // returns head of list
	void setHead(LLN *Head); //sets the head to a node
	void setHead(string s); //sets the head to a new node with content s
	string addTitle(string s); //adds a title in value order
	void print(); //prints the list
	string removeTitle(string s); //remove a title with a matching substring
};


#endif
