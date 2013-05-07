/*
 * Ptr&Ref.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */

#include<iostream>
#include<string>

using namespace std;

void stringPtr(string* s){
	s -> append("this is *");
	}
void stringRef(string& m){
	m += "this is &";
}
int main(){

	string n = "this is innt!";
	stringPtr(&n);
	stringRef(n);
	cout << n << endl;
	//return 0;
}

