#include <iostream>
#include "include/chk.h"
#include "include/includes.h"
#include <string>
std::string Verbose;
using namespace std;
void PrimeChk(int Num, bool verbose) {
	bool IsPrime = false;
	for (int i = 2; i < Num; i++) {
		if (verbose) {
			cout << "Dividing " << Num << " by " << i << "...";
		}
		if (Num % i == 0) {
			if (i != Num) {
			IsPrime = false;
			cout << "Dividing " << Num << " by " << i << "...";
			cout << " Remainder is 0." << endl;
			break;
		}
		}
		else {
			IsPrime = true;
			if (verbose) cout << " Remainder isn't 0." << endl;
		}
	}
	if (IsPrime) {
		cout << "Is Number " << Num << " Prime? Yes." << endl;
	}
	else {
		cout << "Is Number " << Num << " Prime? No." << endl;
	}
}
void PrimeChkIntro() {
	InputNum = 1;
Number:
	cout << endl;
	cout << "Prime Number Checker" << endl;
	cout << "(C)2021 Na Soo-Hwan" << endl;
	cout << "What Number Do You Want To Check?[integral] :";
	cin >> InputNum;
	cout << endl;
	if (cin.fail()) {
		cout << InputNum <<" is Not Prime. Enter Other Number";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto Number;
	}
IVerbose:
	cout << "Verbose or non-verbose? [v/n] : ";
	cin >> Verbose;
	if (Verbose == "v") {
		PrimeChk(InputNum, true);
	}
	else if (Verbose == "n") {
		PrimeChk(InputNum, false);
	}
	else {
		cout << "Unexpected " << Verbose << ". Try Again." << endl;
		goto IVerbose;
	}
}
