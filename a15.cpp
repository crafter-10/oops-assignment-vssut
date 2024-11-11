#include<iostream>
#include<vector>
using namespace std;

class students{
	string name;
	int age;

	public:
	void init(){
		cin >> name >> age;
	}
	friend float averageAge(vector<students> &v);
};

float averageAge(vector<students> &v){
	float total = 0;
	for(int i=0; i<v.size(); i++){
		total+= v[i].age;
	}
	return total/v.size();
}

int main(){
	vector<students> vec;
	cout << "enter the student details\n" ;
	students temp;
	for(int i=0; i<50; i++){
		temp.init();
		vec.push_back(temp);
	}
	cout << "average age of class is :" << averageAge(vec) << endl;
	return 0;
}
