#include <iostream>
#include "include/gen.h"
#include "include/includes.h"
std::string Berbose;
using namespace std;
void PrimeGen(int Num, bool verbose) {
	for (int i = 2; i <= Num; i++) {
		if (verbose) cout << "Calculating If " << i << " is Prime Number... ";
		bool isprime = true;
		for (int p = 2; p < i; p++) {
			if (i % p == 0) {
				isprime = false;
				if (verbose) cout << i << " is Dividable by " << p << endl;
				break;
			}
		}
		if (isprime) {
			cout << i << " is prime!" << endl;
		}

	}

}
void PrimeGenIntro() {
	InputNumA = 1;
Number:
	cout << endl;
	cout << "Prime Number Generator" << endl;
	cout << "(C)2021 Na Soo-Hwan" << endl;
	cout << "What Number Is Max?[integral] :";
	cin >> InputNumA;
	cout << endl;
	if (cin.fail()) {
		cout << InputNumA << "0 Is Not Allowed Here. Enter Other Number";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto Number;
	}
IVerbose:
	cout << "Verbose or non-verbose? [v/n] : ";
	cin >> Berbose;
	if (Berbose == "v") {
		PrimeGen(InputNumA, true);
	}
	else if (Berbose == "n") {
		PrimeGen(InputNumA, false);
	}
	else {
		cout << "Unexpected " << Berbose << ". Try Again." << endl;
		goto IVerbose;
	}
}
