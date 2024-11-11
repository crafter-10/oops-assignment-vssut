#include<iostream>
#include<vector>
using namespace std;

struct book{
	int serial;
	int qty;
	int price;

	void enterdetails(){
		cin >> serial >> qty >> price;
	}
};

int main(){
	vector<book> vec;
	int n ;
	cout << "enter the no of books :";
	cin >> n;
	cout << "enter the book details (serial, qty, price) :\n";
	for(int i=0; i<n; i++){
		book newbook;
		newbook.enterdetails();
		vec.push_back(newbook);
	}

	bool add;
	cout << "want to add any (0/1) ?";
	cin >> add;
	if(add){
		book newbook;
		cout << "details :" ;
		newbook.enterdetails();
		vec.push_back(newbook);
	}

	bool rem;
	cout << "want to remove any (0/1) ?";
	cin >> rem;
	if(rem){
		int ser;
		cout << "enter the serial number :";
		cin >> ser;
		for(int i=0; i<vec.size(); i++){
			if(vec[i].serial == ser){
				vec.erase(vec.begin()+i);
			}
		}
	}

	int total=0;
	for(int i=0; i<vec.size(); i++){
		total += vec[i].qty * vec[i].price;
	}
	cout <<"total price = " << total << endl;
	return 0;
}
