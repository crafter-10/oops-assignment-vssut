#include<iostream>
using namespace std;

class account{
	string name;
	int number;
	protected:
	float balance;

	public:
	void deposit( float a ){
		balance += a;
	}
	void display(){
		cout << "balance is :" << balance << endl;
	}
	void set_details(){
		cout << "enter the name :";
		cin >> name;
		cout << "enter the account number :";
		cin >> number;
	}
};

class curr_acct: public account{
	string type = "curr";
	static int min;
	public:
	void add_intrest(){
		cout << "your account is not eligible for intrest\n";
	}
	void withdraw(float m){
		if(balance-m < min) cout << "\nwithdrawl is not possible, for low balance\n";
		else{
			balance -= m;
			cout << "successful";
		}
	}
};

class sav_acct: public account{
	string type = "sav";
	static int min;
	public:
	void add_intrest(){
		balance += balance*0.05;	//adding 5% intrest
	}
	void withdraw(float m){
		if(balance-m < min) cout << "\nwithdrawl is not possible, for low balance\n";
		else{
			balance -= m;
			cout << "successful" << endl;
		}
	}
};

int sav_acct::min = 10000;
int curr_acct::min = 1000;

int main(){
	sav_acct A;
	curr_acct B;
	cout << "enter the details for account A :\n";
	A.set_details();
	cout << "enter the details for account B :\n";
	B.set_details();
	A.deposit(50000);
	cout << "before adding intrest balance in A :"  << endl;
	A.display();
	A.add_intrest();
	cout << "after adding intrest blance in A :"  << endl;
	A.display();
	B.deposit(5000);

	cout << "\n\n" ;
	cout << "withdrawing 4500 rs from account A :" ;
	A.withdraw(4500);
	cout << "withdrawing 4500 rs from account B :" ;
	B.withdraw(4500);
	return 0;
}
