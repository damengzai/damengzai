/*
 * test.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>
#include <ctime>
using namespace std;
//
//int main(){
//const time_t now = time(0);
//
//	//cout << static_cast<long>(now) << endl;
//	cout <<now<< endl;
//}

//int main(){
//	const string s[] = {"a","b","c"};
//	cout << s[0] << s[1] << s[2] <<endl;
//	//string s1 = const_cast<string>(s[0]);
//	//s1 = "sa";
//}
//


//class X {
//  int i;
//public:
//  X(int ii = 0);
//  void modify();
//};
//
//X::X(int ii) { i = ii; }
//
//void X::modify() { i++; }
//
//X f5() {
//  return X();
//}
//
//const X f6() {
//  return X();
//}
//
//void f7(X& x) { // Pass by non-const reference
//  x.modify();
//}
//
//int main() {
//  f5() = X(1); // OK -- non-const return value
//  f5().modify(); // OK
//// Causes compile-time errors:
// // f7(f5());
////  f6() = X(1);
////!  f6().modify();
////!  f7(f6());
//} ///:~
//class HasFloats {
//    const float x_;
//    float y_;
//public:
//    HasFloats(float x, float y):x_(x)
//    {y_ = y;}
//    void display() const {
//        cout << "x == " << x_ << ", y == " << y_ << endl;
//    }
//};
//
//int main() {
//    HasFloats h(3,4);
//    h.display();
//}
//
//class Z {
//  int i;
//  mutable int j;
//public:
//  Z();
//  void f() const;
//};
//
//Z::Z() : i(0), j(0) {}
//
//void Z::f() const {
////! i++; // Error -- const member function
//    j++; // OK: mutable
//}
//
//int main() {
//  const Z zz;
//  zz.f(); // Actually changes it!
//} ///:~

//#include <cstdlib> // Random number generator
//#include <ctime> // To seed random generator
//class Quoter {
//  int lastquote;
//public:
//  Quoter();
//  int lastQuote() const;
//  const char* quote();
//};
//
//Quoter::Quoter(){
//  lastquote = -1;
//  srand(time(0)); // Seed random number generator
//}
//
//int Quoter::lastQuote() const {
//  return lastquote;
//}
//
//const char* Quoter::quote() {
//  static const char* quotes[] = {
//    "Are we having fun yet?",
//    "Doctors always know best",
//    "Is it ... Atomic?",
//    "Fear is obscene",
//    "There is no scientific evidence "
//    "to support the idea "
//    "that life is serious",
//    "Things that make us happy, make us wise",
//  };
//  const int qsize = sizeof quotes/sizeof *quotes;
//  int qnum = rand() % qsize;
//  while(lastquote >= 0 && qnum == lastquote)
//    qnum = rand() % qsize;
//  return quotes[lastquote = qnum];
//}
//
//int main() {
//  Quoter q;
//  const Quoter cq;
//  cq.lastQuote(); // OK
////!  cq.quote(); // Not OK; non const function
//  for(int i = 0; i < 20; i++)
//    cout << q.quote() << endl;
//} ///:~
class AAA{
	void func1(){cout << "func1" << endl;};
	void func2() const{ cout << "func2" << endl;};
};
int main(){
const AAA aObj;
aObj.func1();
aObj.func2();
const AAA* bObj = new AAA();
bObj->func1();
bObj->func2();
}
