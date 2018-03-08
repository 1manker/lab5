//Lab7Driver
//Lucas Manker
#include "Lab5MyStack.h"
#include<string>
#include <iostream>

using namespace std;

int main(){
	string ex = "ABCDEFG";
	cout << ex << endl;
	cout << "Function 1:" << endl;
	cout << stringReversal1(ex) << endl;
	cout << "Function 2:" << endl;
	cout << stringReversal2(ex) << endl;
	cout << "Function 3:" << endl;
	cout << stringReversal3(ex) << endl;
	cout << "Function 4:" << endl;
	cout << stringReversal4(ex) << endl;

  system("pause");
  return 0;
}
