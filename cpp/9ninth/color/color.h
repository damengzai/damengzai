/*
 * color.h
 *
 *  Created on: 2013-5-6
 *      Author: msm
 */

#ifndef COLOR_H_
#define COLOR_H_
#include <iostream>
#include <cassert>
using namespace std;
enum Hub{red,blue,yellow};
const char* printHub(Hub h){
	static const char* hues[] = {"red" , "blue" , "yellow"};
	assert(red <= h && h <=yellow);
	return hues[h];
}
class color{
	Hub hub;
public:
	color(Hub h):hub(h){};
	Hub getHub(){
		return hub;
	};
	void setHub(Hub h){
		hub = h;
	};
};



#endif /* COLOR_H_ */
