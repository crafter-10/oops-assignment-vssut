#include<iostream>
using namespace std;

int main(){
	string name;
	int units;
	cout << "enter your name :" ;
	cin >> name;
	cout << "enter the electricity units consumed :";
	cin >> units;
	float charges=50;
	if(units>100) charges += 100*60;
	else charges += units*60;
	units -= 100;
	if(units>200) charges += 200*80;
	else if(units >=0) charges += units*80;
	units -= 200;
	if(units>0) charges += units*90;
	if(charges>=300) charges += charges*0.15;

	cout << "Consumer Name :" << name << endl;
	cout << "Charges : Rs " << charges << endl;
	return 0;
}
