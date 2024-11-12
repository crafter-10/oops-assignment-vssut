#include<iostream>
using namespace std;

template <typename T>
void check_smallest(){
	int n;
	cout << "enter the number of elements ?";
	cin >> n;
	T temp, s;
	cout << "enter the elements :";
	for(int i=0; i<n; i++){
		cin >> temp;
		if(!i) s = temp;
		if(temp < s) s = temp;
	}
	cout << "smallest element is :" << s << endl;
}

int main(){
	int n;
	cout << "choose type of input\n (1->int)\n(2->float)\n(3->char) ?";
	cin >> n;

	if(n==1) check_smallest<int>();
	else if(n==2) check_smallest<float>();
	else if(n==3) check_smallest<char>();
	else cout << "not a valid option to enter" << endl;
	return 0;
}
