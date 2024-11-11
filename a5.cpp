#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	float variance, deviation;
	float sum=0;
	cout << "enter total number of numbers :" ;
	cin >> n;
	int arr[n];
	cout << "enter the numbers :" ;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	float mean = sum/n;
	float core = 0;
	for(int i=0; i<n; i++){
		core += pow((arr[i] - mean),2);
	}
	cout << "Variance = " << core/n << endl;
	cout << "Standard Deviation = " << pow(core/n,0.5) << endl;
	return 0;
}
