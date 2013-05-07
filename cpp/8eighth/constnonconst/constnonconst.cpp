/*
 * constnonconst.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>

using namespace std;
class Cnc{
public:
	void funn(){cout << "this is non-const func!" << endl; }
	Cnc(){}
	const void func(){
		cout << "this is const func!" << endl;
		void funn();
	}

};
int main(){
	const Cnc c1;
	Cnc c2;
	//c1.func();
	c2.func();
	//c1.funn();
	c2.funn();
}



