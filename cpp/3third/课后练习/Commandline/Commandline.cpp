/*
 * Commandline.cpp
 *
 *  Created on: 2013-4-11
 *      Author: msm
 */
//#include<iostream>
//
//using namespace std;
//
//int main(int argc , char* argv[]){
//cout << "argc = " << argc << endl;
//for(int i = 0 ; i <= argc ; i++){
//	cout << "argv[" << i << "] = " << argv[i] <<endl;
//
//}
//}

#include "printBinary.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	if(argc != 2) {
    cout << "Must provide a number" << endl;
    exit(1);
  }
  double d = atof(argv[1]);
  unsigned char* cp =
    reinterpret_cast<unsigned char*>(&d);
  for(int i = sizeof(double); i > 0 ; i -= 2) {
    printBinary(cp[i-1]);
    printBinary(cp[i]);
  }
}

