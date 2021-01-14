#include <iostream>
#include "includes.h"
using namespace std;
int main(){
Inital:
	cout << "Welcome To Integral Tools. (C)2021 Na Soo-Hwan" << endl;
	cout << "      1. Prime Number" << endl;
	cout << "      2. Simple Calculator" << endl;
	cout << "      3. Combination" << endl;
	cout << "      0. Exit This Program" << endl;
	cout << "What Category Would You Like To Use? [0~3] : ";
	cin >> category;
	if (cin.fail()) {
                cout << "Error Parsing. Please Try Another Number";
                cout << endl << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                goto Inital;
        }
	cout << endl;
	if (category == 1){
		prime();
	}else if (category == 2){
		calc();
	}else if (category == 3){
                combination();
        }else if (category == 0){
		exit(1);
	}else{
		goto Inital;
	}

}
