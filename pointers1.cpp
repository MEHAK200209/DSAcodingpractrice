//Pointers- var whose value is address of another variable.
#include<iostream>
using namespace std;
int main(){
	int i= 15;
	int* p= &i; 
	cout<< &i<< endl;
	cout<< *p<< endl;
	
	float f= 45.9;
	float* pf= &f;
	cout<< &f<< endl;
	cout<< *pf<< endl;
	
	double d= 456.9;
	double* pd= &d;
	cout<< &d<< endl;
	cout<< *pd<< endl;
	
	return 0;
}
