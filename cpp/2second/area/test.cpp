#include<iostream>
#include"area.h"

using namespace std;
using namespace Rarea;


int main(int argc, char** argv){
	int r = 0;
	cout << "enter a number as �뾶��\n";
	cin >> r;
	area::getarea(r);
	return 0;

}