/*
 * outer&inner.cpp
 *
 *  Created on: 2013-4-18
 *      Author: msm
 */
#include <iostream>

using namespace std;

struct outer{
	int o;
	void seto(int j){
		this->o = j;
	};
	int geto(){
		return o;
	};
	struct inner{
		int i;
		void seti(int k){
			this -> i = k;
		}
		int geti(){
			return i;
		}
	};
};

int main(){
	outer out;
	out.seto(3);
	cout << "outer :" << out.geto() << endl;
	outer::inner in;
	in.seti(4);
	cout << "inner :" << in.geti() << endl;
}



