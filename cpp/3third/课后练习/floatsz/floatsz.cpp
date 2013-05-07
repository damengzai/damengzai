/*
 * floatsz.cpp
 *
 *  Created on: 2013-4-17
 *      Author: msm
 */
#include <iostream>
#include "printBinary.h"


using namespace std;

int main(){
	float f = 1;
	unsigned char* uc = reinterpret_cast<unsigned char*>(&f);
	for(int i = 0 ; i <= sizeof(float) ; i++)
		printBinary(uc[i]);
	cout  << sizeof(float) << endl;
}



