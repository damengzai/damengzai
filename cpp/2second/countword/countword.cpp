#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ifstream in ("in.txt");
	int j = 0;
	string s , r;
	cout << "����Ҫ��ѯ�ĵ��ʣ�" << endl;
	cin >> r;
	while(in >> s)
	{
		if (s == r)
			++j;
	}
	cout << "here is " << j << " words equal "<< "\"" << r << "\"" << "!" << endl;
}