/*
 datatypes.cpp
 18. jul. 2014
 junjun
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {

	char letter = 'a';
	short age = 10;
	int count = 575;
	long numStars = 985467528;
	float pi = 3.14;
	double price = 89.65;
	string season = "summer";

	cout << "Letter: " << letter << endl;
	cout << "Age: " << age << endl;
	cout << "Count: " << count << endl;
	cout << "Number of stars in the sky: " << numStars << endl;
	cout << "Pi: " << pi << endl;
	cout << "Price: " << price << endl;
	cout << season << endl;

	return 0;

	/*
	 * Understanding Data Types
	 * 	C++ is a Strict data typing language (similar to java)
	 *
	 *	Integer, Long, Short
	 *	Double, Float
	 *	Character, Bool
	 *		character： letter A a; punctuation, Nonprintable characters(newline \n); comparison operator <>=
	 *		bool : true or false
	 *
	 *	Memory Allocated for Each Type
	 *		char 				1 byte = 8 bits = 2**8 = 256
	 *		short 				2 byte
	 *		Int, long, float	4 bytes
	 *		Double 				8 bytes
	 *
	 */

}
/*
 *


int travelcost(void) {
	//variables
	double mpg, distance, gallons, pricePerGallon, totalCost;

	//output using insertion operator
	cout << "Enter mpg" << endl;

	//input using extraction operator
	cin >> mpg;

	cout << "Enter distance in miles: " << endl;
	cin >> distance;
	cout << "Enter price for one gallon of gas: " << endl;
	cin >> pricePerGallon;

	//calculate gallons needed
	gallons = distance / mpg;
	//calculate total cost
	totalCost = gallons * pricePerGallon;
	cout << "Total trip cost: $" << fixed << setprecision(2) << totalCost
			<< endl;
	return 1;
	}
	 * C ++
	 *	. Bjarne Stroustrup in 1979 at Bell Labs (Danish, from Åhus university)
	 *	. C with classes
	 *	. Over 35 operators
	 *	. Renamed to C++ in 1982
	 *
	 *	Memory Management:
	 *		. Static memory allocation
	 *		. Automatic memory allocation
	 *		. Dynamic memory allocation
	 *		. Garbage collection
	 *
	 *
	 *
	 * Char					1 byte
	 * Short				2 byte
	 * int, long, and float	4 byte
	 *
	 *
	 */
/**
 *
 * Number Conversion
 *
 * 	. implicit
 * 		int num = 2 + 2.5 = 4;
 * 		double num = 2+ 2.5 = 4.5
 * 		char x = 65; x is 'A'
 *
 * 	. Explicit
 * 		int num = 5 + static_cast<int>(12.75);
 */
