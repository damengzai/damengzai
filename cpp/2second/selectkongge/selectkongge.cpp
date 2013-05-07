#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ifstream in ("in.txt");
	int n = 0;
	string word;
	while( in >> word)
	{
		++n;
	}
	cout << n << endl;
	ofstream out ("out.txt");
	out << n << "¸öµ¥´Ê»ò×Ö·û" << endl;
	//return n;
}