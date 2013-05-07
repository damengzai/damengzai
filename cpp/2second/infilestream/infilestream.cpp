#include<string>
#include<fstream>
using namespace std;
int main(){
	ifstream in ("in.txt");
	ofstream out ("out1.txt");
	string s;
	while (getline(in , s))
	{
	out << s << "\n";
	}
}