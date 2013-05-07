/*
 * externconst.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>
#include <string>
#include "ec.h"

using namespace std;


int main(){
	extern const int eci;
	extern const char ecc;
	string s = "asd";

	cout<< eci << ecc<< endl;
	cout<< s<< endl;
}



