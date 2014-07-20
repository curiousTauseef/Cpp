#include <iostream>
using namespace std;

int main(){
	printf("hello world");
	int dollars, cents;
	double price;
	char dollarSign = 36; // implicit conversion
	cout<<"enter price in dollars and cents: "<<endl;
	cin >>price;
	cents = price * 100 - dollars * 100;
	cout<<"Total dollars: "<<dollarSign<<dollars<<" cents: "<<cents<<endl;
	return 0;
}




