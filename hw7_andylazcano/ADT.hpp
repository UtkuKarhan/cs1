/*
 * ADT_.hpp
 *
 * Contains both function prototypes and ADTs for use within main.cpp and functions.cpp
 *
 *  Created on: Nov 30, 2022
 *      Author: Andy Lazcano
 */

#ifndef ADT_HPP_
#define ADT_HPP_

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


/*******************************************************************************
 * ADTs
*******************************************************************************/
enum ZooLocations {
	ENTRANCE,
	EXHIBIT_1,
	EXHIBIT_2,
	EXHIBIT_3,
	GIFT_SHOP,
	EXIT
};

struct canines {
	string name;
	string breed;
	int age;
	float weight;
	string region;
};

struct felines {
	string name;
	string breed;
	int age;
	float weight;
	string region;
};

struct seaAnimals {
	string name;
	string breed;
	float weight;
	string region;
};

/*******************************************************************************
 * Function Prototypes
*******************************************************************************/

ZooLocations menu();
string convert(canines);
string convert(felines);
string convert(seaAnimals);
string convert(ZooLocations);

void exhibit_1(canines[], const int);
void exhibit_2(felines[], const int);
void exhibit_3(seaAnimals[], const int);
void giftShop();

#endif /* ADT_HPP_ */



