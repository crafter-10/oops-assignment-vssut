#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class stack{
	vector<T> vec;

	public:
	void push(T d){
		vec.push_back(d);
	}
	T pop(){
		T temp = vec[vec.size()-1];
		vec.erase(vec.begin()+(vec.size()-1));
		return temp;
	}
	void show(){
		for(int i=0; i<vec.size(); i++){
			cout << vec[i] << " " ;
		}
		cout << endl;
	}
	
};

int main(){
	stack<int> s;
	s.push(2);
	s.show();
	s.push(3);
	s.show();
	s.push(4);
	s.show();
	cout << "now performing pop on the stack:\n";
	cout << s.pop() << endl;
	s.show();
	cout << s.pop() << endl;
	s.show();
	return 0;
}
