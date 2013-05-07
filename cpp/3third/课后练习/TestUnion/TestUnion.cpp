/*
 * TestUnion.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include <iostream>

using namespace std;

union uniontest{
	int i;
	char c;
	float f;
	double d;
	long l;

};

int main(){
	uniontest x;
	cout << "int :" << sizeof(int) << endl;
	cout << "char :" << sizeof(char) << endl;
	cout << "float :" << sizeof(float) << endl;
	cout << "double :" << sizeof(double) << endl;
	cout << "long :" << sizeof(long) << endl;
	//x.i = 1;
	//x.c = 'c';
	//x.f = 2.0;
	x.d = 3.0;
	//x.l = 4.0;
	cout << "x.i:" << sizeof(x.i) << endl;
	cout << "x.c:" << sizeof(x.c) << endl;
	cout << "x.f:" << sizeof(x.f) << endl;
	cout << "x.d:" << sizeof(x.d) << endl;
	cout << "x.l:" << sizeof(x.l) << endl;
	cout << " x :" << sizeof( x ) <<endl;
		cout << "x.i:" << x.i << endl;
		cout << "x.c:" << x.c << endl;
		cout << "x.f:" << x.f << endl;
		cout << "x.d:" << x.d << endl;
		cout << "x.l:" << x.l << endl;
		//cout << " x :" <<  x  <<endl;

}

