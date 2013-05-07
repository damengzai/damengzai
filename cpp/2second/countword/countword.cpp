#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ifstream in ("in.txt");
	int j = 0;
	string s , r;
	cout << "输入要查询的单词！" << endl;
	cin >> r;
	while(in >> s)
	{
		if (s == r)
			++j;
	}
	cout << "here is " << j << " words equal "<< "\"" << r << "\"" << "!" << endl;
}