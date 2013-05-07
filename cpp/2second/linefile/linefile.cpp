#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	ifstream in("in.txt");
	string s;
	while(getline(in , s)){
//	getline(in , s);
	cout << s << endl;
	cin.get();
	}
}