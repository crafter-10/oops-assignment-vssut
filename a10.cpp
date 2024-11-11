#include<iostream>
#include<cmath>
using namespace std;

double power(double m, double n){
	return pow(m,n);
}

int power(int m){
	return pow(m,2);
}

int main (){
	double m,n;
	cout << "enter m, n :";
	cin >> m>> n;
	cout << m<< " to the power " << n << " is " << power(m,n) << endl;
	cout << m << " to the power 2 is " << power(m) << endl;
	return 0;
}
