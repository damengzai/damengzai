/*
 * test.cpp
 *
 *  Created on: 2013-4-14
 *      Author: msm
 */
#include <iostream>
using namespace std;
//#include <cmath>    // for sqrt()
//
//int main() {
//  using namespace std;
//  const int MAX = 100;
//
//  // Print 2 as a prime:
//  cout << "2 ";
//
//  for (int i = 3; i <= MAX; i += 2) {
//    float val = i; // Produce float value
//    int mid = static_cast<int>(sqrt(val));
//    int j;
//    for (j = 3; j <= mid; j += 2)
//      if (i % j == 0)
//        break;
//
//    if (j > mid)
//      cout << i << ' ';
//  }
//  cout << endl;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//void stringRef(string& s) {
//    s += " come blow";
//}
//
//void stringPtr(string* p) {
//    p->append(" your horn");
//}
//

//int main() {
//    string s = "Little Boy Blue";
//    stringRef(s);
//    stringPtr(&s);
//    cout << s << endl;
//}
//??=include <iostream>
//??=include <cstdlib>
//
//int main(int argc, char* argv??(??)) ??<
//    using namespace std;
//    unsigned int n;
//    if (argc != 2 ??!??! (n = atoi(argv??(1??))) <= 0)
//        return 1;
//    cout << ??-(n ??' 0xf0f0) << '??/n';
//    return 0;
//??>

//
//#include <iostream>
//#include <cstdlib>
//
//int main(int argc, char* argv[]) {
//    using namespace std;
//    unsigned int n;
//    if (argc != 2 || (n = atoi(argv[1])) <= 0)
//        return 1;
//    cout << ~(n ^ 0xf0f0) << '\n';
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//void func() {
//  static int i = 0;
//  cout << "i = " << ++i << endl;
//}
//
//int main() {
//  for(int x = 0; x < 10; x++)
//    func();
//}


////static int fs;
//#include<iostream>
//
//using namespace std;
//
//extern int fs;
////  fs = 1;
//
////void func() {
//
////}
////
//int main() {
//fs = 10;
//	//func();
//	cout << fs << endl;
//}
//: C03:Boolean.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Relational and logical operators.
//#include <iostream>
//using namespace std;
//
//int main() {
//  double i,j;
//  cout << "Enter an integer: ";
//  cin >> i;
//  cout << "Enter another integer: ";
//  cin >> j;
//  cout << "i > j is " << (i > j) << endl;
//  cout << "i < j is " << (i < j) << endl;
//  cout << "i >= j is " << (i >= j) << endl;
//  cout << "i <= j is " << (i <= j) << endl;
//  cout << "i == j is " << (i == j) << endl;
//  cout << "i != j is " << (i != j) << endl;
//  cout << "i and j is " << (i and j) << endl;
//  cout << "i or j is " << (i or j) << endl;
//  cout << " (i < 10) && (j < 10) is "
//       << ((i < 10) && (j < 10))  << endl;
//} ///:~

//: C03:Ifthen.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Demonstration of if and if-else conditionals
//#include <iostream>
//using namespace std;
//
//int main() {
//  int i;
//  cout << "type a number and 'Enter'" << endl;
//  cin >> i;
//  (i > 5)?cout << "It's greater than 5" << endl:((i < 5)?
//      cout << "It's less than 5 " << endl
//    :
//      cout << "It's equal to 5 " << endl);
//
//  cout << "type a number and 'Enter'" << endl;
//  cin >> i;
//  (i < 10)?
//    ((i > 5)?  // "if" is just another statement
//      cout << "5 < i < 10" << endl
//   :
//      cout << "i <= 5" << endl)
//  : // Matches "if(i < 10)"
//    cout << "i >= 10" << endl;
//} ///:~
//#include <iostream>
//using namespace std;
//
//void print(char* name, int* array, int size) {
//  for(int i = 0; i < size; i++)
//    cout << name << "[" << i << "] ("
//         << (long)(&array[i]) << ") = "
//         << array[i] << endl;
//}
//#define PRT(A, B, C, D) \
//  print(#A, A, sizeof A / sizeof *A); \
//  print(#B, B, sizeof B / sizeof *B); \
//  cout << #C " (" << (long)(&C) << ") = " \
//       << C << endl; \
//  print(#D, D, sizeof D / sizeof *D);
//
//int main() {
//  int a[] = { 1, 2, 3 };
//  int b[] = { 4, 5, 6 };
//  char c = 'x';
//  int d[] = { 7, 8, 9 };
//  PRT(a, b, c, d);
//  cout << "Index off the end of a:\n";
//  a[3] = 47;
//  PRT(a, b, c, d);
//  cout << "Index off the end of b:\n";
//  b[3] = 27;
//  PRT(a, b, c, d);
//  cout << "Abuse c with pointers and casts:\n";
//  *((double*)&c) = 99.99;
//  PRT(a, b, c, d);
//} ///:~

//: C03:ArrayAddresses.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
//#include <iostream>
//using namespace std;
//
//int main() {
//  //int a[10];
//	double a[10];
//  cout << "sizeof(double) = "<< sizeof(double) << endl;
//  cout << "sizeof(long) = "<< sizeof(long) << endl;
//  cout << "sizeof(float) = "<< sizeof(float) << endl;
//  cout << "sizeof(int) = "<< sizeof(int) << endl;
//  cout << "sizeof(char) = "<< sizeof(char) << endl;
//  for(int i = 0; i < 10; i++)
//    cout << "&a[" << i << "] = "
//         << (long)&a[i] << endl;
//} ///:~


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main(int argc, char* argv[]) {
//	//char c[1] = {'q' , 'e'};
//	char* c = "1233.3";
//  //for(int i = 1; i < 5; i++)
//    cout << atol(c) << endl;
//}

//#include <iostream>
//using namespace std;
//
//typedef union {
//  char c;
//  short s;
//  int i;
//  long l;
//  float f;
//  double d;
//  long double ld;
//} Primitives;
//typedef union {
//  char c;
//  short s;
//  int i;
//  long l;
//  float f;
//  double d;
//  long double ld;
//
//} P;
//
//int main() {
//	long double lld[] = {1};
//  Primitives p[10];
//  Primitives* pp = p;
//  cout << "sizeof(lld) = "
//        << sizeof(lld) << endl;
//  cout << "sizeof(Primitives) = "
//       << sizeof(P) << endl;
//  cout << "sizeof(long double) = "
//        << sizeof(long double) << endl;
//  cout << "pp = " << (long)pp << endl;
//  pp++;
//  cout << "pp = " << (long)pp << endl;
//}

//#include <iostream>
//using namespace std;
//
//#define P(EX) cout << #EX << ": " << EX << endl;
//
//int main() {
//  long double a[10];
//  for(int i = 0; i < 10; i++)
//    a[i] = i; // Give it index values
//  long double* ip = a;
//  P(*ip);
//  P(*++ip);
//  P(*(ip + 5));
//  long double* ip2 = ip + 5;
//  P(*ip2);
//  P(*(ip2 - 4));
//  P(*--ip2);
//  P(ip2 - ip); // Yields number of elements
//}
//#include "printBinary.h"
//void func(void* v ,int s){
//	cout << v << " sizeof(v) is:" << s <<endl;
//
//};
//int main(){
//	int i[4] = {1,2,3,4};
//	void* vi = static_cast<void*>(i);
//	func(vi , sizeof(vi));
//	//unsigned char ci = const_cast<unsigned char>(i);
//	//printBinary(ci);
//}

//3-27
//int main(){
//	const double cd[3] = {1,2,3};
//	volatile double vd[3] = {4,5,6};
//	for (int i = 0 ; i < 3; i++){
//		cout << "cd[" << i << "] :" << cd[i] <<endl;
//		cout << "vd[" << i << "] :" << vd[i] <<endl;
//
//	}
//	for(int j = 0 ; j < 3; j++){
//		double* nc = const_cast<double*>(&cd[j]);
//		double* nv = const_cast<double*>(&vd[j]);
//		double nct = j * 3.0;
//		nc = &(nct);
//		cout << *nc << endl;
//	}
//
//}
//int main(){
//cout << sizeof(long double) << endl;
//}


//int main(){
//	int* int_p = new int;
//	long* long_p = new long;
//	char* char_p = new char;
//	float* float_p = new float;
//	cout << int_p << endl;
//	cout << long_p << endl;
//	cout << static_cast<void*>(char_p) << endl;
//	cout << float_p << endl;
//	delete int_p;
//	delete long_p;
//	delete []char_p;
//	delete []float_p;
//}


//#include <cstring>
//#include <cstddef> // For size_t
//using namespace std;
//
//char* copy(char* s1) {
//    size_t len = strlen(s1);
//    char* s2 = new char[len + 1];
//    strcpy(s2, s1);
//    return s2;
//}
//
//int main() {
//    char* first = "Read my lips";
//    char* second = copy(first);
//    cout << "first == \"" << first << "\" at "
//         << static_cast<void*>(first) << endl;
//    cout << "second == \"" << second << "\" at "
//         << static_cast<void*>(second) << endl;
//    delete [] second;
//}

//struct outer{
//	int o;
//	void seto(int j){
//		this->o = j;
//	};
//	int geto(){
//		return o;
//	};
//	struct inner{
//		int i;
//		void seti(int k){
//			this -> i = k;
//		}
//		int geti(){
//			return i;
//		}
//	};
//};
//
//int main(){
//	outer out;
//	out.seto(3);
//	cout << "outer :" << out.geto() << endl;
//	outer::inner in;
//	in.seti(4);
//	cout << "inner :" << in.geti() << endl;
//}
//
//#include <cassert>
//
//
//struct Node {
//    int val;
//    Node* next;
//};
//
//void create(Node* head, int howMany) {
//    assert(head);
//    Node* p1 = head;
//    for (int i = 1; i < howMany; ++i) {
//        Node* p2 = new Node;
//        p2->val = i;
//        p1->next = p2;
//        p1 = p2;
//    }
//    p1->next = 0;
//}
//
//void display(Node* node) {
//    assert(node);
//    while (node) {
//        cout << node->val << " (at " << node << ")\n";
//        node = node->next;
//    }
//}
//
//void cleanup(Node* node) {
//    if (node) {
//        cleanup(node->next);
//        cout << "deleting Node at " << node << endl;
//        delete node;
//    }
//}
//
//int main() {
//    Node* head = new Node;
//    head->val = 0;
//    create(head, 10);
//    display(head);
//    cleanup(head);
//}
