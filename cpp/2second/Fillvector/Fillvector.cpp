#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
int main(){
	vector<string> v;
	ifstream in("in.txt");
	string line;
	while(getline(in , line))
		v.push_back(line);
	int i = v.size() - 1;
	for(i; i >= 0 ; i--){
		cout << i << " : " << v[i];
	}
//	return 0;
//	int nlines = v.size();
//	for(int i = 0 ; i < nlines ; i++){
//		int lineno = nlines - i - 1;
//		cout << lineno << ":" << v[lineno] <<endl;
//	}
}