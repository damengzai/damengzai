/*
 * mainprime.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include "findprime.h"

#include <iostream>


using namespace std;

int main(){
	cout << "输入所要达到的最大数值！"<< endl;
	int m;
	cin >> m;
	cout << "返回大于1..." << m <<"之间的质数！" << endl;

	findp(m);
	cout << "已经到达" << m << "！" << endl;
}



