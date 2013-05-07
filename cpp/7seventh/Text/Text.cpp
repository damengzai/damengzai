/*
 * Text.cpp
 *
 *  Created on: 2013-5-3
 *      Author: msm
 */
#include <iostream>
#include <fstream>

using namespace std;
class Text{
	string s ,name;
public:
	Text();
	Text(const string& n);
	string contents();
};

Text::Text(const string& n){
	//name = n;
	ifstream in(n.c_str());
	string ss;
	while(getline(in , ss))
		s += ss;
}
string Text::contents(){return s;}
int main(int argc , char* argv[]){
	//Text t(argv[0]);
	Text t("a.txt");
	cout << t.contents() << endl;
}



