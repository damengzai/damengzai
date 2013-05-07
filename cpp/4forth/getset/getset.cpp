/*
 * getset.cpp
 *
 *  Created on: 2013-4-18
 *      Author: msm
 */
#include <iostream>

using namespace std;

struct getset{
	int x;
	void set(int i){
		x = i;
	}
	int get(){
		return x;
	}
};
int main(){
	getset gt;
	gt.set(5);
	int j = gt.get();
	cout << j << endl;

}



