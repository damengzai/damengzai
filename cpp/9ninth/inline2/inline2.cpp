/*
 * inline2.cpp
 *
 *  Created on: 2013-5-7
 *      Author: msm
 */
#include <iostream>

using namespace std;

class inl{
public:
	inline void inli1(){ cout << "this is inline1!" << endl;inli2();};
	inline void inli2() {cout << "this is inline2!" << endl;};
};
int main(){
	inl i;
	i.inli1();
}



