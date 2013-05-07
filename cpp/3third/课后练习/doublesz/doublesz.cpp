/*
 * doublesz.cpp
 *
 *  Created on: 2013-4-17
 *      Author: msm
 */
#include <iostream>

using namespace std;

//doufunc(double* d, s);
void doufunc(double* d, int s){
	for(int i = 0 ; i < s ; i++){
		cout << "d[ " << i << "] : " << d[i] << endl;
	}
};
int main(){
	double dz[] = {0 , 0 , 0};
	doufunc(dz , sizeof(dz)/sizeof(dz[0]));
	unsigned char* uc = reinterpret_cast<unsigned char*>(dz);
	//for(int* j = uc ; j < dz + sizeof(double) ; j++){
	//	dz[j] = 1;
	//	cout << dz[j] << endl;
	//}
	//doufunc(uc ,  sizeof(uc)/sizeof(uc[0]));
}



