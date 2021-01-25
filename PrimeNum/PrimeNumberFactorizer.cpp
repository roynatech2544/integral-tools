#include <iostream>
#include "include/factorization.h"
#include "include/includes.h"
using namespace std;
int COunt=0;
bool IsPrime(int Number) {
	bool IsPRime = true;
	for (int i = 2; i < Number; i++) {
		if (Number % i == 0 && i != Number) {
			IsPRime = false;
			return IsPRime;
			break;
		}
	}
	if (IsPRime) {
		return true;
	}
	return false;
}
void PrimeFac(int Num, int Origin) {
	for (int i = 2; i < Num; i++) {
		if (IsPrime(Num)) {
			cout << endl;
			int C_C = 0;
			cout << Origin << " is ";
			while (component[C_C] != 0) {
				cout << component[C_C] << " * ";
				C_C++;
			}
			cout << Num << endl;
			break;
		}
		else {
			if (Num % i == 0) {
				component[COunt] = i;
				COunt++;
				PrimeFac(Num / i,Origin);
				break;
			}
		}
		
	}
	

}
void PrimeFacIntro() {
	COunt = 0;
	for (int k = 0; k <= 19; k++) component[k] = 0;
	InputNumB = 1;
Number:
	cout << endl;
	cout << "Prime Number Factorizer" << endl;
	cout << "(C)2021 Na Soo-Hwan" << endl;
	cout << "What Number To Analyze?[integral] :";
	cin >> InputNumB;
	cout << endl;
	if (cin.fail()) {
		cout << InputNumB << "0 Is Not Allowed Here. Enter Other Number";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		goto Number;
	}
	PrimeFac(InputNumB, InputNumB);
}
