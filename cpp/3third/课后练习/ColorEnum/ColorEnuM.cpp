/*
 * ColorEnuM.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include <iostream>

using namespace std;

enum ColorEnum{
	red,
	green,
	blue,
};
int main(){
	//ColorEnum color = red;
	//switch(color){
	//case red: cout << "this is red color!" << endl;break;
	//case green: cout << "this is green color!" << endl;break;
	//case blue: cout << "this is blue color!" << endl;break;
	//}
	//cout << "here use for:" <<endl;
	for (int h = red ; h <= blue ; h++){cout << h <<endl;}
	//cout << color

}


