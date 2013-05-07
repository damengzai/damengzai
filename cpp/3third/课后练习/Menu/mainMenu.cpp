/*
 * mainMenu.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */

#include <iostream>
using namespace std;

int main() {
  char c; // To hold response
  while(true) {
    cout << "MAIN MENU:" << endl;
    cout << "l: left, r: right, q: quit -> ";
    cin >> c;
    switch(c){
    case 'q' :  break;
    case 'l' :{
    	cout << "LEFT MENU:" << endl;
    	cout << "select a or b: ";
    	      cin >> c;
    	      if(c == 'a'){
    	        cout << "you chose 'a'" << endl;}
    	        //continue; // Back to main menu
    	      if(c == 'b')
    	    	  cout << "you chose 'b'" << endl;
    	       // continue;
    	      else
    	        	cout << "you didn't choose a or b!" << endl;
    	      //  continue;
    }break;
case 'r' :{
	cout << "RIGHT MENU:" << endl;
	      cout << "select c or d: ";
	      cin >> c;
	      if(c == 'c'){
	        cout << "you chose 'c'" << endl;}
	       // continue; // Back to main menu
	      if(c == 'd')
	    	  cout << "you chose 'd'" << endl;
	       // continue;
	        else
	        	cout << "you didn't choose c or d!" << endl;
	       // continue;
}break;}
  }}

