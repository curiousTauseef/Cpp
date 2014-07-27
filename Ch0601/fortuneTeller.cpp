/*
 * fortuneTeller.cpp
 *
 *  Created on: 27. jul. 2014
 *      Author: junjun
 */
#include <iostream>
#include <cstdlib>
#include <cstring>
#include<fstream> // accesses to files for reading writing ...
#include <ctime>

using namespace std;

string getRandomReply(string [], int);

int main(){
	ifstream inputfile;
	// declare an input file
	inputfile.open("replies.txt", ios::in);

	char answer [30]; //answer array char
	string answers [20];
	int pos =0;

	// read from th file until end of file (eof)
	while (!inputfile.eof()){ // eof() a function
		inputfile.getline(answer, 30);
		answers[pos] = answer;
		pos++;
	}
	cout<< "Think of a question for the fortune teller, "
			"\npress enter for the answer"<<endl;
	cin.ignore();
	cout<<getRandomReply(answers,20)<<endl;
}
string getRandomReply(string replies[], int size){
	srand(time(0));
	int randomNum=rand()%20;
	return replies [randomNum];
}
