/*
 * stash.cpp
 *
 *  Created on: 2013-4-18
 *      Author: msm
 */
#include <iostream>

using namespace std;

struct stash{
public:
	int size;
	double dz[10];
	void initialize(){
		//this->size = sz;
		size = 10;
		for(int i = 0 ; i < size ; i++){
			dz[i] = i * 1.0;
			cout << dz[i] << endl;
		}

	};
	void cleanup(){
		for(int i = 0 ; i < size ; i++){
					dz[i] = i * 0.0;
				}
	};
	void show(){
		for(int i = 0 ; i < size ; i++){
			cout << dz[i] << endl;
		}
	};
};

int main(){
	stash s;
	s.initialize();
	s.cleanup();
	s.show();
}
