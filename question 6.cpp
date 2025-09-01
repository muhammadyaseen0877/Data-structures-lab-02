//Task #6:
//Implement a Safe Pointer class to wrap around an integer pointer.
//=> Provide methods for setValue(), getValue(), and release().
//=>
//Demonstrate the class by storing marks of 5 students and printing them safely without
//direct pointer manipulation.

#include<iostream>
using namespace std;
class safePointer{
	
	int *ptr;
	
	public:
		safePointer(){
			ptr=new int;
		}
		
			void release(){
			if(ptr!= NULL){
				delete ptr;
				ptr=NULL;
			}
		} 
		
		void setvalue(int value){
			if(ptr!=NULL){
				*ptr =value;
			}
			
		}
		int getvalue(){
			if(ptr!=NULL){
				return *ptr;
			}
			else return 0;
		}
		
	
		
		~safePointer(){
			release();
		}
			
			
		
	
};

int main() {
    safePointer marks[5];
    int m;

    for(int i=0; i<5; ++i){
        cout<<"enter the mark for student "<<i+1<<": ";
        cin>>m;
        marks[i].setvalue(m);
    }

    for(int i=0; i<5;++i){
        cout<<"Student "<<i+1<<": "<<marks[i].getvalue()<<endl;
    }

    return 0;
}


