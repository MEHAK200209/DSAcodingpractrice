/*Pointers Arithmetic- we can add or subtract integer value to and from the pointer. Similarly, pointer arithmetic can be subtracted ( or added) from another. Increment and decrement
 works well in the case of arrays.*/
#include<iostream>
using namespace std;
int main(){
	int i= 45;
	int* p= &i;
	cout<< &i<< endl;
	cout<< *p<< endl;
	cout<< p<< endl;
	
	p = p+ 1;
	cout<< p<< endl; //incremented by 8 bytes
	
	p = p- 1;
	cout<< p<< endl; //deccremented by 8 bytes
	
	double d= 456.9;
	double* dp= &d;
	cout<< &d<< endl;
	cout<< dp<< endl; //0x6ffe00
	dp++;
	cout<< dp<< endl; //0x6ffe08 - incremented by 8 bytes
	return 0;
	
} 
