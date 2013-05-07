#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	vector<float> v1;
	vector<float> v2;
	vector<float> v3;
	for (int i = 0 ; i < 5 ; i++){
		float f;
		cout << "please inpute a num for v1:" << endl;
		cin >> f;
		v1.push_back(f);
	}
	for (int n = 0 ; n < 5 ; n++){
		float f;
		cout << "please inpute a num for v2:" << endl;
		cin >> f;
		v2.push_back(f);
	}
	for (int j = 0 ; j < 5 ; j++){
		v3.push_back(v1[j] + v2[j]);
		cout << v3[j] << endl;
	}
}