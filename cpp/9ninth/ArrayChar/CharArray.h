/*
 * CharArray.h
 *
 *  Created on: 2013-5-6
 *      Author: msm
 */


#include <cstring>
#ifndef _MSC_VER
using std::memset;
#endif
class ArrayChar{
	enum{MAX = 5};
	int Arr[5];
public:
	ArrayChar(char);
	void print() const;
};
inline ArrayChar::ArrayChar(char c){
	memset(Arr , c , MAX);
}
#include <iostream>
void ArrayChar::print() const {
	for (int i = 0 ; i < MAX ; i++){
		std::cout<< Arr[i] << std::endl;
	}
}
