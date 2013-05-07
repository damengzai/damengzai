/*
 * consta.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>

using namespace std;
void func (const int i) {
	cout << i << endl;
	//i = 2;
	//cout << i << endl;

}
void funf(float f){
	cout << f<< endl;
	const float* cf = &f;
	cout << *cf << endl;
}
int main(){

	func(1);
	funf(2);
}



