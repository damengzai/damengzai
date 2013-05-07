#include<iostream>
#include"area.h"
using namespace std;

namespace Rarea{
int area::getarea(int r){
	float s ;
	s = 3.14 * r * r;
	cout << "the area is:" << s << endl;
	return 0;
}
}

