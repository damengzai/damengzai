/*
 * Cpptime.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>
#include "Cpptime.h"
using namespace std;
int main(){
	Time start;
	for(int i = 1; i< 10000000; i++){
		cout << i << ' ';
		if(i%10 == 0) cout << endl;
	}
	Time end;
	cout << endl;
	cout << "start = "<< start.ascii();
	cout << "end   = "<< end.ascii();
	cout << "delta = "<< end.delta(&start);
}



