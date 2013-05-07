/*
 * findprime.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include <iostream>
using namespace std;

int findp(int m){
	for(int i = 0 ; i <= m ; i++){
		int n = 0;

		for(int j = 1 ; j <=i ; j++){
			if(i % j == 0){++n;}
		}
		if(n == 2){cout << i << endl;}
	}return 0;
}



