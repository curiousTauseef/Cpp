/*
 * maillingaddresses.cpp
 *
 *  Created on: 27. jul. 2014
 */

#include <iostream>
#include <fstream>

using namespace std;

struct Employees {
		string fullName;
		char houseNum[5];
		char streetName[50];
		char city[30];
		char state[30];
		int zipcode;
};

void writeToFile(Employees m[], int size);

int main() {
	int numees = 0;
	string fullname;
	string fname, lname;
	cout << "How many employees do you have? \n";
	cin >> numees;

	Employees mailing[2];

	for (int i = 0; i < numees; i++) {
		cout << "Please enter first name: \n";
		cin >> fname;
		cout << "Enter last name: \n";
		cin >> lname;
		fullname = fname + " " + lname;
		mailing[i].fullName = fullname;
		cout << "Enter house number: \n";
		cin >> mailing[i].houseNum;
		cin.ignore();
		cout << "Enter street name: \n";
		//cin >> mailing[i].streetName; //
		cin.getline(mailing[i].streetName,50);
		cout << "Enter city: \n";
		cin >> mailing[i].city;
		cout << "Enter state: \n";
		cin >> mailing[i].state;
		cout << "Enter zipcode: \n";
		cin >> mailing[i].zipcode;
	}
	writeToFile(mailing, numees);
}
void writeToFile(Employees m[], int size) {
	ofstream output;
	output.open("mailingaddress.txt", ios::out);
	for (int i = 0; i < size; i++) {
		output << m[i].fullName << endl;
		output << m[i].houseNum << " " << m[i].streetName << endl;
		output << m[i].city << ", " << m[i].state << " " << m[i].zipcode
				<< endl;
		output << endl;
	}
}

