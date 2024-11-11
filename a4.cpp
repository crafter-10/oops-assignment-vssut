#include<iostream>
using namespace std;

void swap(int &i, int &j){
	int t = i;
	i = j;
	j = t;
}

int main(){
	int a,b;
	cout << "enter the values of a,b :" ;
	cin >> a>>b;
	cout << "before swapping :" << endl;
	cout << "a =" << a << " b =" << b << endl;
	swap(a,b);
	cout << "after swapping :" << endl;
	cout << "a =" << a << " b =" << b << endl;
	
	return 0;
}
