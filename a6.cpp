#include<iostream>
using namespace std;

int main(){
	int n;
	int sum=0;
	cout << "enter the n :";
	cin >> n;
	int *ptr = (int*)malloc(sizeof(int)*n);
	cout << "enter the numbers :" ;
	for(int i=0; i<n; i++){
		cin >> *(ptr+i);
		sum += *(ptr+i);
	}
	cout << "Sum = " << sum << endl;
	cout << "Average = " << sum/n << endl;
	bool f;
	cout << "want to free the space (0/1) ?" ;
	cin >>f;
	if(f){
		free(ptr);
		cout << "array has been deleted" << endl;
	}
	return 0;
}
