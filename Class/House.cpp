/*
 * House.cpp
 *
 *  Created on: 24. jul. 2014
 */

#include "House.h"
#include <iostream>
using namespace std;

//default constructor
House::House() {
	houseColor = "Blue";
	numBathrooms = 2;
	numBedrooms = 3;
	squareFeet = 1200;
	floors = 1;
	tsquareFeet=squareFeet*floors;
}
House::House(string color, int numBath, int numBed, double sqft) {
	houseColor = color;
	numBathrooms = numBath;
	numBedrooms = numBed;
	squareFeet = sqft;
	floors = 1;
	tsquareFeet=squareFeet*floors;

}
House::House(string color, int numBath, int numBed, double sqft,
		int numFloors) {
	houseColor = color;
	numBathrooms = numBath;
	numBedrooms = numBed;
	squareFeet  = sqft;
	floors = numFloors;
	tsquareFeet=sqft*numFloors;
}
//destructor method
House::~House() {
	//cout<<"I'm in the destructor"<<endl;
}

//accessor methods
string House::getColor() {
	return houseColor;
}
int House::getNumBath() {
	return numBathrooms;
}
int House::getNumBed() {
	return numBedrooms;
}
double House::getSqft() {
	return squareFeet;
}
double House::gettsquareFeet(){
	return tsquareFeet;
}
int House::getFloors(){
	return floors;
}

//mutator methods
void House::setColor(string c) {
	houseColor = c;
}
void House::setNumBath(int bath) {
	numBathrooms = bath;
}
void House::setNumBed(int bed) {
	numBedrooms = bed;
}
void House::setSqft(double sqft) {
	squareFeet = sqft;
}
void House::setFloors(int numfloors) {
	floors = numfloors;
}

/*
 * Class
 * 		instance data and functions are hidden from the user
 *
 * 				private
 * 				public
 * 				protected
 */
