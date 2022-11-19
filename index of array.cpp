//Finding index of array element using recursion from beginning
#include<iostream>
using namespace std;
int index(int input[],int size, int x, int output[])
{
	if(size==0){        //if array is empty
		return 0;
	}
	//getting recursive answer
	//int m= index(size-1, input+1, x, output); 
	int m = index(input + 1, size - 1, x, output);
	//If the element at index 0 is equal to x then add 1 to the array values and shift them right by 1 step
	
	if(input[0]==x){
		for(int i = m-1; i>=0; i--){
			output[i+1]= output[i]+ 1;
		}
		
		//put start index in front of array
		output[0]= 0;
		m++;
	}
	else{
		//If the element at index 0 is not equal to x then add 1 to the array values
		for(int i = m-1; i>=0; i--){
			output[i]= output[i]+ 1;	
		}
		
	}
	return m;
}

//find all indices of number
void allindex(int input[], int n, int x){
	int output[n];
	int size= index(input, n, x, output);
	for(int i=0; i< size; i++){
		cout<< output[i]<< " ";
	}
}
// Driver Code
int main()
{
    int arr[] = { 5, 4, 9, 2, 7, 5 }, x = 2;
     
    int n = sizeof(arr) / sizeof(arr[0]);
     
    // Function call
    allindex(arr, n, x);
     
    return 0;
}

//Finding index of array element using recursion

/*#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    if(size == 0){
        return 0;
    }
	int m = allIndexes(input, size-1, x, output);
    if(input[size - 1] == x){
        output[m] = size-1;
        return m+1;
    }else{
        return m;
    }
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
}*/







































