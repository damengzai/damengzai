#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	vector<float> v;
	//输入数据
	for(int i = 0 ; i < 5 ; i++){
		float f;
		cout << "please input num :" << endl;
		cin >> f;
		v.push_back(f);
	}
	//显示数据
	cout << "the num you have inputed is :" << endl;
	for(int j = 0 ; j < 5 ; j++){
		cout << v[j] << endl;
	}
	//求平方并显示
	for(int n = 0 ; n < 5 ; n++){
		v[n] = v[n] * v[n];
		cout << v[n] << endl;
	}
	
}