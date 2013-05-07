/*
 * funcP.cpp
 *
 *  Created on: 2013-4-17
 *      Author: msm
 */
#include <iostream>

using namespace std;

void dtoi(double d){
	cout << static_cast<int>(d);
}

int main(){
	double dd = 1.2;
	void (*fp)(double a) = dtoi;
	(*fp)(dd);
}

