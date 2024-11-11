#include<iostream>
using namespace std;

class strng{
	string s;

	public:
	strng(): s(""){}

	strng(string str){
		s = str;
	}

	int operator==( strng &b){
		int n = 1;
		if(s.size() != b.s.size()) n = 0;
		else{
			for(int i=0; i<s.size(); i++){
				if(s[i]!=b.s[i]){
					n =0;
					break;
				}
			}
		}

		if(n) return 1;
		else return 0;
	}
};

int main(){
	string a,b;
	cout << "enter the string 1 :";
	getline(cin, a);
	cout << "enter the string 2 :";
	getline(cin, b);
	strng A(a);
	strng B(b);

	if(A==B) cout << "strings are equal" << endl;
	else cout << "strings are not equal" << endl;
	return 0;
}
