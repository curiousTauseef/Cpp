/*
 * Movie.h
 *
 *  Created on: 25. jul. 2014
 *      Author: junjun
 */

#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
using namespace std;

class Movie {

	private:
		string name;
		int year;
		int rating;

	public:
		Movie(string,int,int);

		~Movie();

		string getMovie();
		int getYear();
		int getRating();

		void setName(string);
		void setYear(int);
		void setRating(int);
};


#endif /* MOVIE_H_ */
