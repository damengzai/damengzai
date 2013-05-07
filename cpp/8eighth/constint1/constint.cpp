/*
 * constint.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int p;
	const int i =1, j =2 , k =3;
	//i = 1;
	//j = 2;
	//k = 3;
	p = i + j + k;
	int ia[] ={1,2,3,4,5,6};
	for (int l = 0 ; l < p;l++){
		cout << ia[l] <<endl;
	}
}



