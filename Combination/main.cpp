#include <iostream>
#include "include/includes.h"
#include "include/in.h"
using namespace std;
void combination()
{
Int:
        cout << "Combination Tools" << endl;
        cout << "(C)2021 Na Soo-Hwan" << endl;
        cout << "Select Combination Type" << endl;
        cout << "1. nPr" << endl;
        cout << "2. nCr" << endl;
	cout << "0. Back To Menu" << endl;
        cout << "What Type You Want To Calculate? [0~2] : ";
        cin >> mymytype;
        if (cin.fail()) {
                cout << "Failed To Parse. Enter Other Number";
                cout << endl << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                goto Int;
        }
        cout << endl;
	if (mymytype == 1){
		ComP();
	}else if (mymytype == 2){
		ComC();
	}else if (mymytype == 0){
		main();
	}else{
		goto Int;
	}


}
