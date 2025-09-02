//Task #9:
//Implement a program to represent a sparse matrix using a dynamic 2D array.
//=> Input matrix elements.
//=> Display the matrix in normal form.
//=> Display the matrix in compressed form (row, column, value).

#include <iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"enter rows and cplumn: ";
	cin>>r>>c;
	
	int **matrix=new int *[r];
	for(int i=0; i<r;i++){
		matrix[i]=new int [c];
	}
	
	cout<<"Enter the whole matrix: "<<endl;
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>matrix[i][j];
		}
	}
	
	cout<<"normal matrix: "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"commpressed matrix: "<<endl;
	cout<< "row | col | value"<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(matrix[i][j]!=0){
				cout<<i<<"      "<<j<<"     "<<matrix[i][j]<<endl;;
						}
		}
	
	}
	
	for(int i=0; i<r; i++){
		delete [] matrix[i];
	}
	delete [] matrix;
	return 0;
	
}
