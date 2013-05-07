/*
 * stoc.cpp
 *
 *  Created on: 2013-4-19
 *      Author: msm
 */
#include <iostream>

using namespace std;

struct Lib {
	//string a , b , c;
	string s[3];
};

class Libc {
//private:
public:
	//string a, b, c;
	string a;
	string b;
	string c;
	void seta(string s){
		//this -> a = s;
		a = s;
	}
	string geta(){
		//return this -> a;
		return a;
	}
	void setb(string s){
			this -> b = s;
		}
	string getb(){
			return this -> b;
		}
	void setc(string s){
		this -> c = s;
		}
	string getc(){
		return this -> c;
		}
};
int main() {
//	Lib x;
//	x.s[0] = "a";
//	x.s[1] = "b";
//	x.s[2] = "c";
//	//x.s[2] = "a" , "b" , "c";
//	//x.a = "a";
//	//x.b = "b";
//	//x.c = "c";
//	//cout << x.a << x.b << x.c << endl;
//	//string s[3] = {x.a , x.b , x.c};
//	for (int i = 0; i < 3; i++) {
//		cout << x.s[i] << endl;
//	}

	Libc xx;
	xx.seta("asd");
	cout << xx.geta() << endl;
}

