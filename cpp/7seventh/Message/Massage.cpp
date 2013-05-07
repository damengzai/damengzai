/*
 * Massage.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>

using namespace std;

class Message{
string s;
public:
Message(string ss):s(ss){ cout << s << endl;}
void print(){cout << s << endl;};
void print(string a){ cout << a << ' ' << s<< endl;};
};

int main(){
	//Message m1;
	Message m2("m2");
	m2.print("asd");
	m2.print();
}


