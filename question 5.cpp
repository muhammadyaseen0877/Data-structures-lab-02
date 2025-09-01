#include <iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter the rows and coloumn of matrices 1 and 2: ";
	cin>>r>>c;
	
	int **m1=new int*[r];
	int **m2=new int*[r];
	int **sum=new int*[r];
	int **diff=new int*[r];
	
	for(int i=0; i<r; ++i){
		m1[i]= new int[c];
		m2[i]= new int[c];
		sum[i]=new int[c];
		diff[i]=new int[c];
	}
	cout<<"Enter the value of matrix1: "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>m1[i][j];
		}
	}
	
	cout<<"Enter the value of matrix2: "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>m2[i][j];
		}
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			sum[i][j]= m1[i][j]+m2[i][j];
			diff[i][j]= m1[i][j]-m2[i][j];
		}
	}
	
	cout<<"the sum of two matrices: "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"the difference of two matrices: "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<diff[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<r; i++){
		delete[] m1[i];
		delete[] m2[i];
		delete[] sum[i];
		delete[] diff[i];
	}
	delete[] m1;
	delete[] m2;
	delete[] sum;
	delete[] diff;
	
	return 0;	
}
