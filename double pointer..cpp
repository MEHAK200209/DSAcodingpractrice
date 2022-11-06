#include<iostream>
using namespace std;
void increment1(int **p){
		p= p+1; //no change
	}
	
	void increment2(int **p){
		*p= *p+1; //change
	}
	void increment3(int **p){
		**p= **p+1; // chnge
	}
int main(){
	int i= 10;
	int*p = &i;
	
	
	int** p2= &p;
	cout<< p2<< endl; // address
	cout<< &p<< endl; //same address
	
	cout<< p<< endl; // icremented address
	cout<< *p<< endl; // 10
	cout<< &i<< endl; //same incremented address
	
	cout<< i << endl; //10
	cout<< *p<< endl; //10
	cout<< **p2 << endl; //10
	return 0;
}
