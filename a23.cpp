#include<iostream>
using namespace std;

template<typename T>
class vector{
	int len;
	T* arr;

	public:
	vector(int l){
		len = l;
		arr = new T[len];
		cout << "enter " << len << " elements :";
		for(int i=0; i<len; i++){
			cin >> arr[i];
		}
	}
	~vector(){
		delete[] arr;
	}

	void multiply(T n){
		for(int i=0; i<len; i++){
			arr[i] = arr[i]*n;
		}
	}

	void change(int j, T v){
		arr[j] = v;
	}

	void display(){
		for(int i=0; i<len; i++){
			if(i) cout << ",";
			cout << arr[i] ;
		}
		cout << endl;
	}
};

int main(){
	int length;
	cout << "enter the length of the vector :";
	cin >> length;
	vector<int> vec(length);
	vec.change(1,7);
	vec.multiply(5);
	vec.display();
	return 0;
}
