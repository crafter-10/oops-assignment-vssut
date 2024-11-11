#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float p,t,r;
	cout << "enter the principle :";
	cin >> p;
	cout << "enter the time :";
	cin >> t;
	cout << "enter the rate :";
	cin >> r;
	cout << "Simple intrest :" << p + (p*t*r)/100 << endl;
	cout << "Compund intrest :" << p*pow(1 + r/100,t) << endl;
	return 0;
}
