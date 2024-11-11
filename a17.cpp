#include<iostream>
#include<vector>
using namespace std;

class MAT{
	public:
	MAT(int m, int n){
		int mat[m][n];
		cout << "enter the values :\n";
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin >> mat[i][j];
			}
		}
	}
};

int main(){

	MAT a(2,2);

	return 0;
}
