/*
 * cc.cpp
 *
 *  Created on: 2013-4-19
 *      Author: msm
 */
#include <iostream>

using namespace std;
class A;
class B;
class A{
public:
	void ptob(B*){
		cout << "a point to b!" << endl;
	}
};
class B{
public:
	void ptoa(A*){
		cout << "a point to a!" << endl;
	}
};

int main(){
	A a;
	B b;
	a.ptob(&b);
	b.ptoa(&a);
}


