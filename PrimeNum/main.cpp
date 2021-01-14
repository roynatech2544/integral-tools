#include <iostream>
#include "include/global_vars.h"
#include "include/includes.h"
using namespace std;
void prime()
{
Init:
	cout << "Prime Number Tools Ver " << Version << endl;
	cout << "(C)2021 Na Soo-Hwan" << endl;
	cout << "Tools List" << endl;
	cout << "1. PrimeNumberChecker" << endl;
	cout << "2. PrimeNumberGenerator" << endl;
	cout << "3. PrimeNumberFactorizer" << endl;
	cout << "4. Return To Main Menu" << endl;
	cout << "What Tool You Want To Use? [1~4] : ";
	cin >> selection;
	if (cin.fail()) {
		cout << "0 Is Not Allowed Here. Enter Other Number";
		cout << endl << endl;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto Init;
	}
	cout << endl;
	if (selection == 1) {
		PrimeChkIntro();
		cout << endl;
		goto Init;
	}else if (selection == 2){
		PrimeGenIntro();
		cout << endl;
		goto Init;
	}
	else if (selection == 3) {
		PrimeFacIntro();
		cout << endl;
		goto Init;
	}else if (selection == 4){
		main();
	}else {
		goto Init;
	}
}
