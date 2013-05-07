/*
 * printBinary.cpp
 *
 *  Created on: 2013-4-11
 *      Author: msm
 */
#include <iostream>
void printBinary(const unsigned char val) {
  for(int i = 7; i >= 0; i--)
    if(val & (1 << i))
      std::cout << "1";
    else
      std::cout << "0";
}



