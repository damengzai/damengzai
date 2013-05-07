/*
 * mainPets.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include <iostream>
#include "YourPets.h"

using namespace std;
int dog , cat , bird;

//void YourPets(char name, int& addr);
void f(){}
void g(){cout << "this is g()!" << endl;}
void h(){cout << "nothing" <<endl;}
void m(){}
int main(){
	YourPets(&dog);
	YourPets(&cat);
	YourPets(&bird);
	cout << "" <<(long)&f << endl;
	cout << "" <<(long)&g << endl;
	cout << "" <<(long)&h << endl;
	cout << "" <<(long)&m << endl;
	//YourPets(&g);
	//YourPets(&h);
	//cout << "dog" << &dog << endl;


}



