//Gabe Appleton
//This is the prototyping file

#ifndef _head_
#define _head_

#include <cstdlib>
#include <string>
#include <iostream>
#include "LL.h"
#include "LLN.h"

using namespace std;

class LL;
class LLN;
LL *l;

int main(); //It's main, it calls the other things
string getInput(); //Grabs your input and decids what to do
string getCaps(string s); //Converts strings into capitals
string addTitle(string s); //Adds title to the list
string removeTitle(string s); //Removes at a specific position
string print(); // prints the list

#endif
