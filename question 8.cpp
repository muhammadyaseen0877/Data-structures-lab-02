//Task #8:
//Create a dynamic program to store temperature readings of a city for n days and m different times in a day
//using a 2D array.
//=> Calculate the daily average temperature.
//=> Find the hottest and coldest day.

#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"Enter the number of Days: ";
	cin>>n;
	cout<<"Enter the timing: ";
	cin>>m;
	
	float **temp=new float*[n];
	for(int i=0; i<n; i++){
		temp[i]=new float[m];
	}
	
	for(int i=0; i<n; i++){
		cout<<"enter the Temperature of Day "<<i+1<<" : "<<endl;;
		for(int j=0; j<m; j++){
			cout<<"Time slot "<<j+1<<" : ";
			cin>>temp[i][j];
		}
		
	}
	
	int hottest, coldest;
	float *avg=new float[n];
	float max;
	float min;
	for(int i=0; i<n; i++){
		float sum=0;
		for(int j=0; j<m; j++){
			sum+=temp[i][j];
		}
		avg[i]=sum/m;
		if(i==0 || avg[i]>max){
			max=avg[i];
			hottest=i+1;
		}
		
		if(i==0 || avg[i]<min){
			min=avg[i];
			coldest=i+1;
		}
		
		
	}
	for(int i=0; i<n; i++){
		cout<<"the daily average temperature for day "<<i+1<<" : "<<avg[i]<<endl;
	}
	cout<<"The hottest day: "<<hottest<<endl;
	cout<<"the coldest day: "<<coldest<<endl;
	
	for(int i=0; i<n; i++){
		delete [] temp[i];
	}
	delete [] temp;
	delete [] avg;
	}
	

