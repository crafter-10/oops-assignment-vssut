#include<iostream>
using namespace std;

void test3(){
	throw 3;
}
void test2(){
	throw '2';
	test3();
}
void test1(){
	test2();
	throw 1;

}

int main(){
	try{
		test1();
	}
	catch(int a){
		cout << "from level (int) :" << a << endl;
	}
	catch(char c){
		cout << "from level (char) :" << c << endl;
	}
	
	return 0;
}
