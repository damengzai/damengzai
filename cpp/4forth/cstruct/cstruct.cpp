/*
 * cstruct.cpp
 *
 *  Created on: 2013-4-18
 *      Author: msm
 */
#include <iostream>

//#include "cstruct.h"
using namespace std;
struct sfunc{
//protected:
public:
	int func(){
	cout << "this is sfunc::func!" <<endl;
	return 1;}
};

//int sfunc::func(){

//}
int main(){

	sfunc s;
	s.func();
}



