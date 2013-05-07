/*
 * clp.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>

using namespace std;

int main(){
	const long l[] = {1,2,3};
	const long* lp = l;
	cout << lp << endl;
	lp = lp+1;
	cout << lp<< endl;
	cout << ++lp << endl;
	cout << *lp << endl;

}


