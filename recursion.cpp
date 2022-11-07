#include<iostream>
using namespace std;
int factorial(int n){
	cout<< n<< endl;
	if(n==0){
		return 1;
	}
	int SmallOutput= factorial(n-1); //breaking problem
	return n * SmallOutput;
}
int main(){     // main function
	int n;
	cin>> n;
	int output= factorial(n); //clling function 
	cout<< output<< endl;
	return 0;
}
