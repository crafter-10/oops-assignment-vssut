#include<iostream>
#include<vector>
using namespace std;

class MAT{
	vector<vector<int>> mat;
	int m, n;

	public:
	MAT(int a, int b): m(a), n(b){
		cout << "enter the values of matrix :" ;
		for(int i=0; i<m; i++){
			vector<int> temp;
			for(int j=0; j<n; j++){
				int t;
				cin >> t;
				temp.push_back(t);
			}
			mat.push_back(temp);
		}
	}

	MAT(): m(0), n(0) {}

	MAT(int c, int a, int b): m(a), n(b){
		for(int i=0; i<m; i++){
			vector<int> temp;
			for(int j=0; j<n; j++){
				temp.push_back(c);
			}
			mat.push_back(temp);
		}

	}

	void display(void);

	MAT operator+( MAT &b){
		if(m ==b.m && n == b.n){
			MAT temporary(0,m,n);
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					temporary.mat[i][j] = mat[i][j] + b.mat[i][j];
				}
			}
			return temporary;
		}
		else {
			cout << "matrix dimension are not valid to do the operation .\n";
		}
		MAT a;
		return a;
	}

	MAT operator-( MAT &b){
		if(m ==b.m && n == b.n){
			MAT temporary(0,m,n);
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					temporary.mat[i][j] = mat[i][j] - b.mat[i][j];
				}
			}
			return temporary;
		}
		else {
			cout << "matrix dimension are not valid to do the operation .\n";
		}
		MAT a;
		return a;
	}

	MAT operator*( MAT &b){
		if(n == b.m){
			MAT temporary(0,m,b.n);
			for(int i=0; i<m; i++){
				for(int j=0; j<b.n; j++){
					int sum=0;
					for(int k=0; k<n; k++){
						sum += mat[i][k] * b.mat[k][j];
					}
					temporary.mat[i][j] = sum;
				}
			}
			return temporary;
		}
		else {
			cout << "matrix dimension are not valid to do the operation .\n";
		}
		MAT a;
		return a;
	}
};

void MAT::display(){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << mat[i][j] << " " ;
		}
		cout << endl;
	}
}

int main(){
	int m,n;
	cout << "enter the dimension of matrix A :";
	cin >> m >> n;
	MAT A(m,n);
	cout << "enter the dimension of matrix B :";
	cin >> m >> n;
	MAT B(m,n);
	cout << "\naddition of A and B :\n";
	MAT sum = A + B;
	sum.display();
	cout << "\nsubtraction of A and B :\n";
	MAT sub = A - B;
	sub.display();
	cout << "\nmultiplication of A and B :\n";
	MAT mul = A * B;
	mul.display();
	return 0;
}
