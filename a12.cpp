#include<iostream>
using namespace std;

class account{
	string name;
	long int number;
	string type;
	long int balance;

	public:
	void initialize(){
		cout << "enter the name :" ;
		cin >> name;
		cout << "enter the account number :";
		cin >> number;
		cout << "enter the account type :";
		cin >> type;
		balance = 0;
		cout << "your account has been created." << endl;
	}

	void deposite(){
		long int newbalance;
		cout << "enter the amount, you want to deposite :";
		cin >> newbalance;
		balance += newbalance;
	}

	void withdraw(){
		long int withdrawamount;
		cout << "enter the amount, you want to withdraw :";
		cin >> withdrawamount;
		if(balance-withdrawamount < 0) cout << "you don't have enough money.\n";
		else balance -= withdrawamount;
	}

	void display(){
		cout << "Name - " << name << endl;
		cout << "Balance - " << balance << endl;
	}
};

int main(){
	account a1;
	a1.initialize();

	bool d;
	cout << "want to deposite (0/1) ?";
	cin >> d;
	if(d) a1.deposite();

	bool w;
	cout << "want to withdraw (0/1) ?";
	cin >> w;
	if(w) a1.withdraw();

	a1.display();
	return 0;
}
