#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	vector<float> v;
	for (int i = 0 ; i < 5 ; i++){
		float f;
		cout << "please inpute a num:" << endl;
		cin >> f;
		v.push_back(f);
	}
	for (int j = 0 ; j < 5 ; j++){
		cout << v[j] << endl;
	}
}