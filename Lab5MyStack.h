//Lucas Manker
//MyStack function declarations
#ifndef LAB5MYSTACK_H_
#define LAB5MYSTACK_H_
#include<string>
#include <vector>

using namespace std;

std::string stringReversal1(std::string input);
std::string stringReversal2(std::string input);
std::string stringReversal3(std::string input);
std::string stringReversal4(std::string input);

class MyStack{
public:
  bool isEmpty() const;
  void push(char& c);
  char pull();

  vector<char> data;
};

#endif