#include <iostream>
using namespace std;
void Print_Err(int Err_Code = 1) {
	cout << endl;
	cout << "=============================================================" << endl;
	cout << "==============|           ERROR           |==================" << endl;
	cout << "=============================================================" << endl;
	cout << "Something's Wrong. Please Make Sure You Entered EveryThing Right." << endl;
	cout << "Bye Bye" << endl;
	cout << "[Program Failed With Exit Code "<< Err_Code <<"]";
}
