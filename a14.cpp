#include<iostream>
#include<vector>
using namespace std;

class employee{
	long int id;
	string name;
	string address;
	int dependents;

	public:
	void init(){
		cin >> id >> name >> address >> dependents;
	}
	void display(){
		cout << "name - " << name << '\t';
		cout << "id - " << id << endl;
	}
	int checkDependent(){
		if(dependents>2) return 1;
		return 0;
	}
};

int main(){
	vector<employee> vec;
	cout << "\nenter the id, name, address, dependents (for 20 employees):\n";
	for(int i=0; i<20; i++){
		employee temp;
		temp.init();
		vec.push_back(temp);
	}

	cout << "employee details having more than 2 dependents :\n";
	for(int i=0; i<vec.size(); i++){
		if(vec[i].checkDependent()){
			vec[i].display();
		}
	}

	return 0;
}
