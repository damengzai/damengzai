/*
 * Simple.cpp
 *
 *  Created on: 2013-4-19
 *      Author: msm
 */
#include <iostream>

using namespace std;

class Simple{
	int i;
public:
	Simple(int a){
		this -> i = a;
		cout << "creating a Simple class!" << endl;
		cout << this -> i << endl;
	}
	~Simple(){
		cout << "removing the simple class!" << endl;
		cout << this -> i << endl;
	}
};
int main(){
Simple sim(1);
	{
		Simple sim2(2);
		goto jump;

	}
	//Simple sim4(4);
	jump:
	Simple sim3(3);
	cout << "ending!" << endl;
	//goto jun;
}
//jun:

