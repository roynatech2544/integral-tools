#include <iostream>
#include "include/vars.h"
#include <string>
float version = (float)2.1;
using namespace std;
void calc() {
Set_Vars:
	cout << "=============================================================" << endl;
	cout << "=========   Welcome To Terminal Caculator Ver " << (float)version << "  ==========" << endl;
	cout << "=============================================================" << endl;
	cout << endl;
	cout << "      == Please Enter The Operator You Want To Use ==" << endl;
	cout << "             1. Plus (+)" << endl;
	cout << "             2. Minus (-)" << endl;
	cout << "             3. Multiply (*)" << endl;
	cout << "             4. Divide (/)" << endl;
	cout << "             5. Return To Main Menu" << endl;
	cout << "Your Choice [1~5]: ";
	cin >> operatorNum;
	if (operatorNum == 1 || operatorNum == 2 || operatorNum == 3 || operatorNum == 4) {
		cout << "You Choosed " << operatorNum << ". Is it Correct? [y/n] : "; 
		char Iscorrect;
		cin >> Iscorrect;
		cout << endl;
		if (Iscorrect == 'y') {
			cout << "OK" << endl;
			if (operatorNum == 1) {
				cout << "Enter The First Number (Currently ? + ?) [Float]: ";
			}else if (operatorNum == 2){
				cout << "Enter The First Number (Currently ? - ?) [Float]: ";
			}else if (operatorNum == 3) {
				cout << "Enter The First Number (Currently ? * ?) [Float]: ";
			}else if (operatorNum == 4) {
				cout << "Enter The First Number (Currently ? / ?) [Float]: ";
			}
			cin >> Num1;
			cout << "Entered " << Num1 << " as Num1" << endl;
Get_Num2:
			if (operatorNum == 1) {
				cout << "Enter The Second Number (Currently " << Num1 <<" + ?) [Float]: ";
			}
			else if (operatorNum == 2) {
				cout << "Enter The Second Number (Currently " << Num1 << " - ?) [Float]: ";
			}
			else if (operatorNum == 3) {
				cout << "Enter The Second Number (Currently " << Num1 << " * ?) [Float]: ";
			}
			else if (operatorNum == 4) {
				cout << "Enter The Second Number (Currently " << Num1 << " / ?) [Float]: ";
			}
			cin >> Num2;
			cout << "Entered " << Num2 << " as Num2" << endl;
			if (operatorNum == 1) {
				Ans = Num1 + Num2;
			}
			else if (operatorNum == 2) {
				Ans = Num1 - Num2;
			}
			else if (operatorNum == 3) {
				Ans = Num1 * Num2;
			}
			else if (operatorNum == 4) {
				if (Num2 == 0) {
					cout << "Can't Divide By 0. Re-Enter Num2." << endl;
					cout << endl;
					goto Get_Num2;
				}
				Ans = double(Num1 / Num2);
			}
			cout << endl;
			cout << endl;
			cout << "=============================================================" << endl;
			cout << "==================|    ANSWER IS " << Ans << "    |===================" << endl;
			cout << "=============================================================" << endl;

		}else if (Iscorrect == 'n') {
			cout << "OK, Taking You To The First Page...." << endl;
			cout << endl;
			cout << endl;
			goto Set_Vars;
		}else{
			Print_Err(2);
		}	
	}else if (operatorNum == 5){
		main();

	}else{
		Print_Err();
	}
	
}
