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
		/**
		 * private members
		 *
		 * of a class are accessible only from within
		 * other members of the same class (or from their "friends")
		 */
	private:
		string houseColor;
		int numBathrooms;
		int numBedrooms;
		double squareFeet;
		double tsquareFeet;
		int floors;

		/*
		 * public members
		 *
		 * are accessible from anywhere where the object is visible.
		 */
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
 *
 * 	protected members
 *
 * 	are accessible from other members of the same class (or from their "friends"),
 * 	but also from members of their derived classes.
 *
 *
 *Function Behaviors
 *			Bug crawl
 *			grasshopper hops to move
 *			ladybug flies when it moves
 *
 *
 */
