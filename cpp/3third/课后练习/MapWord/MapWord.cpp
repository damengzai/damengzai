/*
 * MapWord.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */

#include <iostream>

using namespace std;

void MapWord(){

	cout << "this is MapW" << endl;
	string c;
			for(;;){
			cin >> c;
			int code;
			if(c == "b")
				//code = 0;
			break;
			if(c == "a")
				code = 1;
			else if (c == "c")
				code = 2;
			else
				code = 3;

			switch(code){
			case 0 : break;
			case 1 : cout << "this is a ! code = 1" << endl; break;
			case 2 : cout << "this is c ! code = 2" << endl; break;
			case 3 : cout << "this is other words! code = 3 " << endl; break;
			}
		}
	}


