//Arrays and Pointers- 
#include<iostream>
using namespace std;
int sum(int *a, int size){                      ////Arrays as pointers
		int ans= 0;
		for(int i=0; i< size; i++){
			ans+= a[i];	
			
				}
		
	}
	

int main()
{
	int a[10];
	cout<< sizeof(a)<< endl; //40
	cout<< sum(a, 10)<< endl; //10
	cout<< sum(a+3, 7)<< endl; // part of a function as array
	cout<< &a<< endl;
	cout<< *a<< endl;
	cout<< *(a+1)<< endl;
	int* p;
	cout<< sizeof(p)<< endl;
	cout<< &p << endl;
	cout<< *p << endl;
	return 0;
}
	
	
	
		

