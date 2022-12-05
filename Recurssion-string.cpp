// Finding length of array using recursion
#include<iostream>
using namespace std;

int length(char s[]){
	if(s[0]== '\0'){
		return 0;
	}
	
	int smallstringlength = length(s+1);
	return 1 + smallstringlength;
	}

int main(){
	char str[100];
	cout<< "Enter the string: ";
	cin>> str;
	
	int l= length(str);
	cout<<l<< endl;
	removeX(str);
	cout << str << endl;
	l= length(str);
	cout<< l << endl;
}


