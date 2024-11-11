#include<iostream>
using namespace std;

struct biodata{
	string name;
	string address;
	string father;
	string telephone;
	string email;
	string academic;
	string extracurricular;
	
	void enterdetails(){
		cout << "enter the name :";
		getline( cin, name);
		cout << "enter your address :";
		getline(cin, address);
		cout << "enter father's name :";
		getline(cin, father);
		cout << "enter telephone number :";
		getline(cin, telephone);
		cout << "enter your email :";
		getline(cin, email);
		cout << "enter your academic details :";
		getline(cin, academic);
		cout << "enter extracurricular :";
		getline(cin, extracurricular);
	}

	void printdetails(){
		cout << "\nYOUR DETAILS ARE\n" ;
		cout << "name -" << name << endl;
		cout << "address -" << address << endl;
		cout << "father -" << father << endl;
		cout << "email -" << email << endl;
		cout << "telephone -" << telephone << endl;
		cout << "academic -" << academic << endl;
		cout << "extracurricular -" << extracurricular << endl;
	}
};	

int main(){
	biodata john;
	john.enterdetails();
	john.printdetails();
	return 0;
}
