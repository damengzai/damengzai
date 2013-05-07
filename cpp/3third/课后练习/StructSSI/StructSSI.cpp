/*
 * StructSSI.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include <iostream>

using namespace std;

typedef struct{
		string s1;
		string s2;
		int i;
	}structssi;
int main(){
	structssi ss;
	ss.i = 1;
	ss.s1 = "s1";
	ss.s2 = "s2";
	cout << ss.i << endl;
	cout << ss.s1 <<endl;
	cout << ss.s2 <<endl;
	structssi* strptr = &ss;
	strptr -> i = 2;
	strptr ->s1 = "this is s1";
	strptr ->s2 = "this is s2";
	cout << ss.i << endl;
	cout << ss.s1 << endl;
	cout << ss.s2 << endl;
}



