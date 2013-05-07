/*
 * testfriend.cpp
 *
 *  Created on: 2013-4-19
 *      Author: msm
 */
#include <iostream>

using namespace std;

struct X;

void f(X*);

struct X{
private:
	int i;
public:
	void ff(X*);
	friend void ::f(X*);
};

void X::ff(X* x){
	x -> i = 1;
	cout << x -> i << endl;
}
void f(X* xs){
	xs -> i = 2;
	cout << xs -> i << endl;
}
int main(){
	X xx;
	xx.ff(&xx);
	f(&xx);

}



