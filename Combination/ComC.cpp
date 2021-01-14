#include <iostream>
#include <string>
#include "include/includes.h"
#include "include/combinc.h"
std::string truerbose;
using namespace std;
void ComCCal(int nnum, int rnum, bool verbose) {
	cout << "Calculating " << nnum << "P" << rnum << "." << endl;
	if (verbose) cout << "Step 1. Multiplying From "<< nnum << " To " << nnum - rnum + 1 << endl;
	int factorial = 1;
	for (int a = nnum; a >= nnum - rnum + 1; a--){
		factorial = factorial * a;
	}
	if (verbose) cout << "Step 1's Answer is "<< factorial << "." << endl;
	int myfactorial = 1;
	for (int h = 1; h <= rnum; h++){
		myfactorial = myfactorial * h;
	}
	int answer = factorial / myfactorial;
	if (verbose) cout << "Step 2. Dividing " <<  factorial << " by " << myfactorial << "..." << endl;
	cout << "Answer is " << answer << "." << endl;
}
void ComC() {
n:
	cout << endl;
	cout << "Combination > nPr" << endl;
	cout << "(C)2021 Na Soo-Hwan" << endl;
	cout << "What Number is n in nCr? [integral] :";
	cin >> myn;
	cout << endl;
	if (cin.fail() || myn <= 1) {
		cout << "Error in Parsing. Enter Other Number";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto n;
	}
r:

	cout << endl;
	cout << "What Number is r in nCr? [integral] :";

	cin >> myr;

	cout << endl;
	if (cin.fail() || myr > myn ) {
		cout << "Error in Parsing. Enter Other Number";

		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto r;
	}
IVerbose:
	cout << "Verbose or non-verbose? [v/n] : ";
	cin >> truerbose;
	if (truerbose == "v") {
		ComCCal(myn, myr, true);
	}
	else if (truerbose == "n") {
		ComCCal(myn, myr, false);
	}
	else {
		cout << "Unexpected " << truerbose << ". Try Again." << endl;
		goto IVerbose;
	}
}
