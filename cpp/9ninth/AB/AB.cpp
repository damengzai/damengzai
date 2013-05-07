/*
 * AB.cpp
 *
 *  Created on: 2013-5-7
 *      Author: msm
 */
#include <iostream>

using namespace std;

class A{
	int a;
public:
	//A(){cout << "A" << endl;};
	A(int aa) :a(aa){ cout << "this is class A! and a = " << a << endl; };
};
class B{
	A ba;
	//int b;
public:
	//inline B(int bb) : b(bb) {cout << "this is class B! and b = " << b << endl; };
	 inline B(A bb) : ba(bb){
		B b[] = {ba};
		//for(int i = 0 ; i <1; i++){cout << b[i] << endl;}
		//cout << b[0] << endl;
		//return b[0];
	};
	//inline B(){cout << "B"<<endl;};
};

int main(){
	B bbb(1);
}



