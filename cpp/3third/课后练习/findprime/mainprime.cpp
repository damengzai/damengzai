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
	cout << "������Ҫ�ﵽ�������ֵ��"<< endl;
	int m;
	cin >> m;
	cout << "���ش���1..." << m <<"֮���������" << endl;

	findp(m);
	cout << "�Ѿ�����" << m << "��" << endl;
}



