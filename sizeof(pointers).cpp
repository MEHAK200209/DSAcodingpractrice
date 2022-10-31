//Sizeof(pointer) - just like the datatypes the sze of pointers is also fixed and is 8 bytes for 64-bit and 4 bytes for 32-bit.
#include<iostream>
using namespace std;
int main(){
	int i= 14;
	int*p = &i; 
	
	cout<< sizeof(p)<< endl; //8
	cout<< &i<< endl; //cout<< &i<< endl;
	cout<< *p<< endl; //0x6ffe14
	cout<< *p<< endl; //14
	
	i++;
	cout<< &i<< endl; // on incremening the address of i and size will remain same, but the value of i will be incremented by 1.
	cout<< *p<< endl; //15
	cout<< sizeof(p)<< endl;//8
	
	int a= *p; 
	a++;
	cout<< &a<< endl; //0x6ffe10 
	cout<< *p<< endl; //15
	
	i= 56;
	cout<< &i<< endl; //0x6ffe14
	cout<< *p<< endl; //56
	
	*p= 26;
	cout<< &i<< endl; //0x6ffe14
	cout<< *p<< endl; //26
	
	(*p)++; // 
	cout<< &i<< endl; //0x6ffe14
	cout<< *p<< endl; //27
	
	return 0;
} 
