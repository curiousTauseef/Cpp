/*
 * Movie.cpp
 *
 *  Created on: 25. jul. 2014
 */

#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie(string name, int year,int rating){
	this->name=name;
	setYear(year);
	this->rating=rating;
}
Movie::~Movie(){
	//cout<<"program stopped!!"<<endl;
}
string Movie::getMovie(){
	return name;
}
int Movie::getYear(){
	return year;
}
int Movie::getRating(){
	return rating;
}
void Movie::setYear(int year){
	if(year>1700 && year<2015){
		this->year=year;}else{
			this->year=0;
			cout<<"erro with year!"<<endl;
		}
}
