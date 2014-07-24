/*
 * houses.cpp
 *
 *  Created on: 24. jul. 2014
 */

#include <iostream>
#include "House.h"
#include "Movie.h"
#include <string>
using namespace std;

void printHouse(House);
void printMovie(Movie);

int main() {
	//Create an instance of the House class
	//using the default constructor
	House house1;

	//Create a second instance
	//provide values for color, bed, bath, and sqft
	House house2("Tan", 3, 2, 2500);
	House house3("white", 5, 30, 9999);
	House house4("Yellow", 2, 5, 50, 3);
	//print house information
	printHouse(house1);
	printHouse(house2);
	printHouse(house3);
	printHouse(house4);

	Movie m1("Rive-Rolf", 2013, 9);
	Movie m2("The Dark Knight Rises", 2012, 10);
	Movie m3("Edge of Tomorrow", 2013, 8);
	Movie m4("Transcendence", 201, 7);
	printMovie(m1);
	printMovie(m2);
	printMovie(m3);
	printMovie(m4);
	m4.setYear(2013);
	printMovie(m4);
	return 0;
}
void printHouse(House house) {
	//print the house information using
	//the dot operator
	cout << "House Color: " << house.getColor() << "\nNumber Bathrooms: "
			<< house.getNumBath() << "\nNumberBedrooms: " << house.getSqft()
			<< endl;
	cout << "Floors: " << house.getFloors() << "\nSquare feet: "
			<< house.getSqft() << endl;
	cout << "Total Square feet: " << house.gettsquareFeet() << endl;

	cout << endl << endl;

	//since it is a void function,
	//I do not need a return statement
}
void printMovie(Movie movie){
	cout << "Movie Name: " << movie.getMovie() << endl;
	cout << "Year: " << movie.getYear() << endl;
	cout << "Rating: " << movie.getRating() << endl;
}

