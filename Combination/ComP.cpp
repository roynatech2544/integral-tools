#include <iostream>
#include <string>
#include "include/includes.h"
#include "include/combinp.h"
std::string WowVerbose;
using namespace std;
void ComPCal(int nnum, int rnum, bool verbose) {
	cout << "Calculating " << nnum << "P" << rnum << "." << endl;
	if (verbose) cout << "Multiplying From "<< nnum << " To " << nnum - rnum + 1 << endl;
	int factorial = 1;
	for (int a = nnum; a >= nnum - rnum + 1; a--){
		factorial = factorial * a;
	}
	cout << "Answer is "<< factorial << "." << endl;
}
void ComP() {
n:
	cout << endl;
	cout << "Combination > nPr" << endl;
	cout << "(C)2021 Na Soo-Hwan" << endl;
	cout << "What Number is n in nPr? [integral] :";
	cin >> n;
	cout << endl;
	if (cin.fail() || n <= 1) {
		cout << "Error in Parsing. Enter Other Number";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto n;
	}
r:

	cout << endl;
	cout << "What Number is r in nPr? [integral] :";

	cin >> r;

	cout << endl;
	if (cin.fail() || r > n ) {
		cout << "Error in Parsing. Enter Other Number";

		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto r;
	}
IVerbose:
	cout << "Verbose or non-verbose? [v/n] : ";
	cin >> WowVerbose;
	if (WowVerbose == "v") {
		ComPCal(n, r, true);
	}
	else if (WowVerbose == "n") {
		ComPCal(n, r, false);
	}
	else {
		cout << "Unexpected " << WowVerbose << ". Try Again." << endl;
		goto IVerbose;
	}
}
