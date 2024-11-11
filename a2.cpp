#include<iostream>
using namespace std;

int main(){
	float f,c;
	cout << "enter the temp in fahrenheit :";
	cin >> f;
	c = (f-32) * (5.0/9);
	cout << "in celsius = " << c << endl;

	return 0;
}
