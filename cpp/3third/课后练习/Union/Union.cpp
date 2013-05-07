/*
 * Union.cpp
 *
 *  Created on: 2013-4-11
 *      Author: msm
 */
#include <iostream>

using namespace std;


	union Packed{
		int i;
		float f;
		char c;
		double d;
	};
	int main(){
		cout << "sizeof(Packed) = " << sizeof(Packed) << endl;
		cout << "sizeof(double) = " << sizeof(double) << endl;
		cout << "sizeof(char) = " << sizeof(char) << endl;
		Packed p;
		p.i = 1;
		cout << "P.i = " << p.i << endl;

	}


