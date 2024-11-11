#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class books{
	char* author;
	char* title;
	int price;
	char* publisher;
	int stock;

	public:
	books(const char* a,const char* t, int p,const char* pub, int s){
		author = new char[strlen(a)+1];
		title = new char[strlen(t)+1];
		publisher = new char[strlen(pub)+1];

		strcpy(author, a);
		strcpy(title, t);
		strcpy(publisher, pub);

		price = p;
		stock = s;
	}
	~books(){
		delete[] author;
		delete[] title;
		delete[] publisher;
		cout << "destructor has been called.\n" ;
	}
	int isMatch(const char* t,const char* a){
		if(strcmp(t,title)==0 && strcmp(a,author)==0) return 1;
		else return 0;
	}
	void details(){
		cout << "\nBook Details :\n" ;
		cout << "title :" << title << endl;
		cout << "price :" << price << endl;
		cout << "publisher :" << publisher << endl;
		cout << "stock :" << stock << endl;
	}
	int orderable(int n){
		if(n<=stock) return 1;
		else return 0;
	}
	float total(int n){
		return n*price;
	}
};

int main(){
	books inventory[] =
	{
	books("stephen","a-random-holiday",280,"penguin",5),
	books("ramgopal","bhooth-ek-anokhi-kahani",405,"tbw",3),
	books("chetan","3-idiots",204,"pearson",3)
	};
	char* auth = new char[15];
	char* titl = new char[15];

	cout << "enter the book (title, author) you are looking for ?\n";
	cin >> titl >> auth;
	
	int f = 1;
	for(int i=0; i<3; i++){
		if(inventory[i].isMatch(titl, auth)){
			f = 0;
			inventory[i].details();
			int n;
			cout << "how many copies do you want ?";
			cin >> n;
			if(inventory[i].orderable(n)){
				cout <<"it will cost you :" << inventory[i].total(n) << endl;
			}
			else cout << "we have less copies !\n";
		}
	}
	if(f) cout << "sorry! we don't have that book\n";
	return 0;
}
