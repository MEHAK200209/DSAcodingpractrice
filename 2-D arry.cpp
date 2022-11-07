#include<iostream>
using namespace std;
int main(){
	int m, n;
	cin>> m>> n;
	int** p= new int* [m]; //makng pointer array that stored individual arrays address
	for(int i=0; i<m; i++){
		p[i]= new int[i+1];
		for(int j=0; j<n; j++){
			cin>> p[i][j];
		}
		
	}
	for (int i=0; i<m; i++){ // deletin double pointer array,
		delete[] p[i];
	}
	delete [] p; //whenever we use he word new, we are to dlt it in order to free up the memory space.
	return 0;
}
