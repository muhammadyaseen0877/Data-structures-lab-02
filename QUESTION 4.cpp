//Task #3:
//Design a program to handle marks of students in different courses using a jagged array
//(since each student is enrolled in a different number of courses).
//=> Input the number of courses each student takes.
//=> Dynamically allocate memory for each student accordingly.
//=> Calculate and display each student’s average marks.

#include <iostream>
using namespace std;
 int main(){
 	
 	int numStd;
 	cout<<"Enter the number of student: ";
 	cin>>numStd;
 	
 	int *numCources = new int[numStd];
 	float **marks=new float*[numStd];
 	for(int i=0; i<numStd; i++){
 		cout<<"enter the cources: ";
 		cin>>numCources[i];
 		
 		marks[i]= new float[numCources[i]];
 		for(int j=0; j<numCources; ++j){
 			cout<<"Enter marks for the cource "<<i+1<<" : ";
 			cin>>marks[i][j];
 			
		 }
	 }
	 
	 float averageMarks;
	 for(int i=0; i<numStd; i++){
	 	sum=0;
	 	for(int j=0; j<numCources; j++){
	 		sum+= marks[i][j];
		 }
		 averageMarks=sum/numCources[i];
		 cout<<"the avergae marks for each Course: "<<averageMarks<<endl;
	 }
	 for (int i=0; i<numStd; ++i){
	 	delete[] marks[i];
	 }
	 delete[] marks;
	 delete[] numCources;
	 
	 return 0;
 }
