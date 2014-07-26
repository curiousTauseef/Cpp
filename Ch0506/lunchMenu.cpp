/*
 * lunchMenu.cpp
 *
 *  Created on: 26. jul. 2014
 */
#include<iostream>
#include<vector>
using namespace std;

int main() {
	string menu[] = { "banana", "orange", "apple", "water melon" };

	int prices[]= { 12, 10, 9, 13 };

	for (int i = 0; i < 4; i++) {
		cout << "Nr." << i + 1 << " " << menu[i] << " price: " << prices[i]<<"\n";
	}
	cout<<"What would like to have: enter 1,2,3,4"<<endl;
	int index;
	cin>>index;
	cout<<"how many would you like to have "<<endl;
	int amount;
	cin>>amount;
	cout<<"\n"<<menu[index-1]<<" price: "<<prices[index-1]<<", amount: "<<amount<<endl;
	cout<<"Total: "<<(amount*prices[index-1])<<endl;
}

