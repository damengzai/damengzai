/*
 * HenNestEgg.cpp
 *
 *  Created on: 2013-4-19
 *      Author: msm
 */
#include <iostream>
using namespace std;
class Hen{
public:
	class Egg;
	void display(Egg*){
			cout << "this is hen!" << endl;
			//eg -> e = 5;
			//cout << eg -> e << endl;
		}
	//int h;

	class Nest{
		int n;
		friend class Hen;
	public:


		//friend
		class Egg{
			int e;
			friend class Nest;
		public:

			//friend class Hen;
			void display(){
			//void display(Hen* he){
				cout << "this is egg!" << endl;
				//he -> h = 1;
				//cout << "he -> h = " << he -> h << endl;

			}

		};
		void display(){
			cout << "this is nest!" << endl;
		}
	};


};
int main(){
	Hen hen;
	Hen::Nest nest;
	Hen::Nest::Egg egg;
	//hen.display(&egg);
	nest.display();
	egg.display();

}



