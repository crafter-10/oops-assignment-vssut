#include<iostream>
using namespace std;

template<typename T>
T* alloc(int n, T v){
	T* arr = new T[n];
	for(int i=0; i<n; i++){
		arr[i] = v;
	}
	return &arr[0];
}

int main(){
	int n;
	cout << "enter the size of array ?:";
	cin >>n;
	int val;
	cout << "enter the value :";
	cin >> val;

	int* array = alloc<int>(n,val);

	for(int i=0; i<n; i++){
		cout << array[i] << " " ;
	}
	cout << endl;
	
	

	return 0;
}
