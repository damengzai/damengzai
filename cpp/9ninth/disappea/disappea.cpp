#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

#define DEBUG(x) cout << #x "="<< x << endl
int main(){
	string s = "abcdefghijklmnopqrstvuwxyz";
	int a = s.size();
	for(int i = 0; i< a; i++){
		s = s.erase(a - i -1,1);
		DEBUG(s);
	}
}

