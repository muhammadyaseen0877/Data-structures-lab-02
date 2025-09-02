#include <iostream>
using namespace std;

int main(){
	int numCategory;
	cout<<"Enter the number of categories: ";
	cin>>numCategory;

	int *numBooks=new int[numCategory];
	int **bookid=new int*[numCategory];

	for(int i=0; i<numCategory; i++){
		cout<<"Enter the number of books for category "<<i+1<<": ";
		cin>>numBooks[i];

		bookid[i]=new int[numBooks[i]];

		cout<<"Enter book IDs for category "<<i+1<<":"<<endl;
		for(int j=0; j<numBooks[i]; j++){
			cout<<"Book "<<j+1<<": ";
			cin>>bookid[i][j];
		}
	}

	int search;
	cout<<"\nEnter the book ID to search: ";
	cin>>search;

	bool found = false;
	for(int i=0; i<numCategory; i++){
		for(int j=0; j<numBooks[i]; j++){
			if(bookid[i][j]==search){
				cout<<"Book ID "<<search<<" is available in category "<<i+1<<"."<<endl;
				found=true;
				break;
			}
		}
		if(found){
			break;
		}
	}

	if(!found){
		cout<<"Book ID "<<search<<" is not available in the library."<<endl;
	}

	for(int i=0; i<numCategory; i++){
		delete[] bookid[i];
	}
	delete[] bookid;
	delete[] numBooks;

	return 0;
}

