//A company has multiple departments, each department has a different number of employees.
//=> Use a jagged array where each row corresponds to a department and columns store employee
//salaries.
//Calculate:
//-> The highest salary in each department.
//-> The department with the overall maximum average salary.

#include <iostream>
using namespace std;
int main(){
	int numDept;
	cout<<"Enter the number of departments: ";
	cin>>numDept;
	
	int *numEmp=new int[numDept];
	float **salary=new float *[numDept];
	
	for(int i=0; i<numDept; i++){
		cout<<"number of employee in each department "<<i+1<<":";
		cin>>numEmp[i];
		
		salary[i]=new float [numEmp[i]];
		
		for(int j=0; j<numEmp[i]; j++){
			cout<<"Enter the salary of each employee:" <<j+1<<" ";
			cin>>salary[i][j];
		}
	}
	
	cout<<"The highest salary in each department: "<<endl;
	for(int i=0; i<numDept; i++){
		float maxsalary=salary[i][0];
		for(int j=0; j<numEmp[i]; j++){
			if(salary[i][j]>maxsalary){
				maxsalary=salary[i][j];
			}
		}
		cout<<"max salary of department "<<i+1<<" : "<<maxsalary<<endl;
	}
	
	float maxAvg;
	int maxAvgDept;
	for(int i=0; i<numDept; i++){
		float sum=0;
		for(int j=0; j<numEmp[i]; j++){
			sum+=salary[i][j];
		}
		float avg= sum/numEmp[i];
		
		if(i==0 || avg>maxAvg){
			maxAvg=avg;
			maxAvgDept=i+1;
			
		}
	}
	
		cout<<"The Maximum Average Salary: "<<maxAvg<<endl;
		cout<<"The maximam average Salary Department: "<<maxAvgDept<<endl;
		
		for(int i=0; i<numDept; i++){
			delete [] salary[i];
		}
		delete [] salary;
		delete [] numEmp;
		
		return 0;
		
		
		
	
}
