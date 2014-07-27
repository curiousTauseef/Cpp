/*
 * readaFile.cpp
 *
 *  Created on: 27. jul. 2014
 *      Author: junjun
 */
#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream inputfile;
	double colonm1;
	double colonm2;
	double col1Total=0;
	double col2Total=0;
	int readError=20;
	int pos = 0;
	try {
		if (inputfile.fail()) {
			throw readError;
		}
	} catch (int error) {
		if (error == readError) {
			cout << "Error on reading file!" << endl;
		}
	}
	inputfile.open("numbers.txt", ios::in);

	while (!inputfile.eof()) {
		inputfile >> colonm1;
		col1Total += colonm1;
		inputfile >> colonm2;
		col2Total += colonm2;
		pos++;
		//cout<<" :"<<colonm1<<" "<<colonm2<<endl;
	}

	cout << "Average C 1 : " << col1Total / pos << endl;
	cout << "Average C 2 : " << col2Total / pos << endl;
	return 0;
}

