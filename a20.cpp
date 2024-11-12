#include<iostream>
using namespace std;

class shape{
	string color;
	string texture;

	public:
	virtual void getdimensions(){}
	virtual float area(){
		return 0.0;
	}
};
class triangle:public shape{
	float h,b;
	void getdimensions() override{
		cout << "enter the base of triangle :";
		cin >> b;
		cout << "enter the height of triangle :";
		cin >> h;
	}
	float area() override{
		return 0.5*b*h;
	}

};
class rectangle:public shape{
	float l,b;
	void getdimensions() override{
		cout << "enter the length :";
		cin >> l;
		cout << "enter the breadth :";
		cin >> b;
	}
	float area() override{
		return l*b;
	}
};

int main(){
	shape* s = nullptr;
	int n;
	cout << "enter the number of dimension of shape (2/3) ?";
	cin >> n;

	if(n==3){
		s = new triangle();
	}
	else if(n==2){
		s = new rectangle();
	}
	else cout << "invalid dimensions\n";

	s->getdimensions();
	cout << "area is :" << s->area() << endl;	
	return 0;
}
