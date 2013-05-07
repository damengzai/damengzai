/*
 * pcopyp.cpp
 *
 *  Created on: 2013-4-18
 *      Author: msm
 */
#include <iostream>
#include <cstring>
#include <cstddef>

using namespace std;
char* copy(char* c1){
	size_t len = strlen(c1);
	char* c2 = new char[len + 1];
	strcpy(c2 , c1);
	return c2;
};
int main(){
	//char s = ;
	char* c1 = "this is c1!";
	char* c2 = copy(c1);
	cout << "c1:" << c1 << ":@" << static_cast<void*>(c1)<<endl;
	cout << "c2:" << c2 << ":@" << static_cast<void*>(c2)<<endl;
}



