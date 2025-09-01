
#include <iostream>
using namespace std;

int main(){
	int r, c;
	cout<<"Enter the number of banches and  seats of the classroom: ";
	cin>>r>>c;
	
	if(r<0 || c<0){
		cout<<"invalid";
		return 1;
		
	}
	int **arr=new int *[r];
	for(int i=0; i<r; i++){
		arr[i]=new int[c]();
	}
	
	int accoupied;
	cout<<"Enter the accupied counts for the seats: ";
	cin>>accoupied;
	
	for(int i=0; i<accoupied; ++i){
		int row, col;
		cout<<"selete the row and the column that youn want to accoupied: ";
		cin>>row>>col;
		
		if(row>=0 || row<r && col>=0 || row<c){
			arr[row][col]=1;
			
		}
		else{
			cout<<"wrong index..."<<endl;
		}
		
		
	}
	cout<<"displaying final result: "<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<r; i++){
		delete[] arr[i];
	}
	delete[] arr;
	
	
}
