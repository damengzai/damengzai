/*
 * Rotational.cpp
 *
 *  Created on: 2013-4-11
 *      Author: msm
 */
#include <iostream>

using namespace std;

unsigned char Rotational(unsigned char val){
	int highbit;
	if(val & 0x80)
		highbit = 1;
	else
		highbit = 0;
	val <<=1;
	val |= highbit;
	//return val;
	cout << val;
}
//unsigned char ror(unsigned char val){
//	int lowbit;
//	if(val & 1)
//		lowbit = 1;
//	else
//		lowbit = 0;
//	val >>=1;
//	val |= (lowbit << 7);
//	return val;
//}



