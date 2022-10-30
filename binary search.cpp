#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[20], i, n, loc=-1;
	printf(" enter number of elements:");
	scanf("%d", &n);
	printf(" enter the elements:");
	for(i=0;i<n; i++)
	{
	   scanf("%d", &arr[i]);	
	}
	int x,low=0, high= n-1;
while (low<=high)
	int mid= (high+low)/2;
if(arr[mid]==x){

	loc= mid;
	break;
}
else if(x< arr[mid])
    high=mid-1
else
     low= mid+1
if(pos<0)
 printf("element not found");
else
 printf loc;     
		
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  }
