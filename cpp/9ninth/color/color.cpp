#include <iostream>
#include "color.h"

using namespace std;

int main(){
	color c(red);
	cout << printHub(c.getHub())<< endl;
	c.setHub(blue);
	cout << printHub(c.getHub()) << endl;
}
