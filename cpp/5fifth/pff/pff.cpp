/*
 * pff.cpp
 *
 *  Created on: 2013-4-19
 *      Author: msm
 */
//class B;
#include <iostream>

using namespace std;

class A;
class B{
public:
	void func(){cout << "B" << endl;}
	void funcb(A* s);

};
class A{
private:
	int a , b , c;
public:
	friend class C;
	friend void B::funcb(A*);
	//friend void C::funcc(A*);
};
void B::funcb(A* a){
	cout << a -> a << endl;
}
class C{
public:
	void funcc(A* ss){
		ss -> c = 3;
		cout << ss -> c << endl;
	}
};


int main(){
	A a;
	B b;
	C c;
	b.funcb(&a);
	c.funcc(&a);
}
