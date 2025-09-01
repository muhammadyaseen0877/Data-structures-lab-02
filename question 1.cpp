//Implement a program that dynamically allocates a 1D array of integers.
//=> The size should be given by the user.
//=> Initialize all elements with zero.
//=> Then, let the user update values at different positions.
//=> Finally, print the array and deallocate memory properly.

#include <iostream>
using namespace std;

int main(){
	int size;
	 cout<<"enter the size of the arry: ";
	 cin>>size;
	 
	 if(size<0){
	 	cout<<"invalid input: ";
	 	return 1;
		 }
	 
	 
	 int *arr=new int [size]();
	 int update;
	 cout<<"how many valuse user want to update: ";
	 cin>>update;
	 
	 for(int i=0; i<update; ++i){
	 	int index, value;
	 	cout<<"enter the index (0 to "<<size-1<<"): ";
	 	cin>>index;
	 	
	 	if(index<0 || index>size-1){
	 		cout<<"invalid index..";
	 		continue;
		 }
	 	
	 	cout<<"Enter the value: ";
	 	cin>>value;
	 	
	 	arr[index]=value;
	 }
	 
	 cout<<"dispaly arry after updating: "<<endl;
	 for(int i=0; i<size; i++){
	 	cout<<arr[i]<<" ";
	 }
	 cout<<endl;
	 
	 delete[] arr;
	 
	 return 0;
	 
}
