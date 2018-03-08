//Lucas Manker
#include "Lab5MyStack.h"
#include <stack>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

//TODO:
std::string stringReversal1(std::string input){
	stack<char> word;
	for (int i = 0; i < input.length(); i++) {
		word.push(input.at(i));
	}
	string reverse;
	while (!word.empty()) {
		reverse.push_back(word.top());
		word.pop();
	}

	return reverse;
}
//TODO:
std::string stringReversal2(std::string input){
	vector<char> word;
	for (int i = 0; i < input.length(); i++) {
		word.push_back(input.at(i));
	}
	string reverse;
	while (!word.empty()) {
		reverse.push_back(word.back());
		word.pop_back();
	}
	return reverse;
}
//TODO:
std::string stringReversal3(std::string input){
	list<char> word;
	for (int i = 0; i < input.length(); i++) {
		word.push_back(input.at(i));
	}
	string reverse;
	while (!word.empty()) {
		reverse.push_back(word.back());
		word.pop_back();
	}
	return reverse;
}
//TODO:
std::string stringReversal4(std::string input){
	MyStack word;
	for (int i = 0; i < input.length(); i++) {
		word.push(input.at(i));
	}
	string reverse;
	while (!word.isEmpty()) {
		reverse.push_back(word.pull());
	}
	return reverse;
}

//TODO:
bool MyStack::isEmpty() const{
	bool empty = false;
	if (data.empty()) {
		empty = true;
	}
	return empty;
}

//TODO:
void MyStack::push(char& c){
	data.insert(data.begin(),c);
	return;
}

//TODO:
char MyStack::pull(){
	char c;
		c = data.front();
		data.erase(data.begin());
	return c;
}
