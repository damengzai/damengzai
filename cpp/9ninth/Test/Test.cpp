/*
 * Test.cpp
 *
 *  Created on: 2013-5-6
 *      Author: msm
 */
#include "../require.h"
#include <fstream>
#include <ctime>
#include <iostream>
#include <windows.h>
using namespace std;

//#define BAND(x) (((x)>5 && (x)<10) ? (x) : 0)
//
//int main() {
//  ofstream out("macro.out");
//  assure(out, "macro.out");
//  for(int i = 4; i < 11; i++) {
//    int a = i;
//    out << "a = " << a << endl << '\t';
//    out << "BAND(++a)=" << BAND(++a) << endl;
//    out << "\t a = " << a << endl;
//  }
//} ///:~

//
//void f1() {
//    int i = 1;
//    float x = i;
//    i = static_cast<int>(x);
//}
//
//inline void f2() {
//    int i = 1;
//    float x = i;
//    i = static_cast<int>(x);
//}
//
//int main() {
//    // Time f1:
//    clock_t start = clock();
//    for (int i = 0; i < 10000000; ++i)
//        f1();
//    clock_t stop = clock();
//    float ticks = stop - start;
//    cout << "Time for f1: " << ticks / CLOCKS_PER_SEC << endl;
//
//    // Time f1:
//    start = clock();
//    for (int i = 0; i < 10000000; ++i)
//        f2();
//    stop = clock();
//    ticks = stop - start;
//    cout << "Time for f2: " << ticks / CLOCKS_PER_SEC << endl;
//}

//inline void f() {
//    cout << "f() in InternalLinkage.cpp\n"<< endl;
//} ///:~
//
////: S09:LinkError.cpp
////=M @echo compile and link LinkError.cpp by hand
//int main() {
//    extern void f();
//   //f();
//}
//int main(){
//	while(1)
//	{
//		printf("* \n");
//	    short st=GetKeyState(VK_RETURN);
//	    if(st == 1){break;}
//	    else continue;
//	}
//}


