#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the number of months: ";
    cin>>m;

    if(m<=0){
        cout<<"invalid number of months try later "<<endl;
        return 1;
    }

    double* expenses=new double[m];

    for(int i=0;i<m;i++){
        cout<<"enter expense for month "<<i+1<<": ";
        cin>>expenses[i];
    }

    char choice;
    cout<<"doo you want to add more months??? (y/n): ";
    cin>>choice;

    if(choice=='y'||choice=='Y'){
        int more;
        cout<<"how many more months do you want to add???: ";
        cin>>more;
        
        if(more>0){
            double* newExpenses=new double[m+more];

            for(int i=0;i<m;i++){
                newExpenses[i]=expenses[i];
            }
            for(int i=m;i<m+more;i++){
                cout<<"Enter expense for month "<<i+1<<": ";
                cin>>newExpenses[i];
            }

            delete[] expenses;

            m+=more;
        } 
		else{
            cout<<"No more months added........."<<endl;
        }
    }

    double total=0;
    for(int i=0;i<m;i++){
        total+=expenses[i];
    }

    double average=total/m;

    
    cout<<"Total Months: "<<m<<endl;
    cout<<"Total Expenses: "<<total<<endl;
    cout<<"Average Monthly Expense:"<<average<<endl;

    delete[] expenses;

    return 0;
}

