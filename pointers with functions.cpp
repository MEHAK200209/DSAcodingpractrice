#include<iostream>
using namespace std;
void print(int *p){
	cout<< *p<< endl;
}

void pointerincrement(int* p){
	p= p+1;
}
void increment(int* p){
	(*p)++;
}

int main(){
	int i= 10;
	int *p= &i; //*p=10
	print(p);
	
	cout<< p<< endl;
	pointerincrement(p); // No change( bcz, the address remain same, say be it for p, p+1, p+2..) 
	cout<< p<< endl;
	
	cout<< *p<< endl;
	increment(p); //increment b 1 (we aren't changing p, but the value pointed by p)
	cout<< *p<< endl; 
}
