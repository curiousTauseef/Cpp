/*
 * House.h
 *	Class
 *  Created on: 24. jul. 2014
 */

#ifndef HOUSE_H_
#define HOUSE_H_

#include <string>
using namespace std;

class House {
	private:
		string houseColor;
		int numBathrooms;
		int numBedrooms;
		double squareFeet;
		double tsquareFeet;
		int floors;

	public:
		//constructors
		House();
		House(string, int, int, double);
		House(string, int, int, double, int);

		//destructor
		~House();

		//accessor methods
		string getColor();
		int getNumBath();
		int getNumBed();
		double getSqft();
		int getFloors();
		double gettsquareFeet();

		//mutator methods
		void setColor(string);
		void setNumBath(int);
		void setNumBed(int);
		void setSqft(double);
		void setFloors(int);
};

#endif /* HOUSE_H_ */

/*
 * classes contain:
 * 			instance data
 *
 * 			constructors
 *
 * 			functions
 *
 */
