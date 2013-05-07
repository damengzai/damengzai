/*
 * testthis.cpp
 *
 *  Created on: 2013-4-18
 *      Author: msm
 */
#include <iostream>

using namespace std;

struct tt{
	int i;
	void set(int x){
		this->i = x;
	}
	int get(){
		return this->i;
	}
};

int main(){
	tt t;
	t.set(4);
	cout << t.get() << endl;
}


