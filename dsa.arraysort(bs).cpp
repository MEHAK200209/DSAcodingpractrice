//sort an array using binary search
#include<stdio.h>
int binarySearch(int arr[],int l,int r,int x)
{
	while(l<=r) {
		int m=l+(r-l)/2;
        if(arr[m]==x)
			return m;
        if(arr[m]<x)
			l=m+1;
        else
			r=m-1;
	}
    return -1;
}
int main(void)
{
	int arr[10], num, x;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Enter the array elements in sorted order: ");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element to search: ");
    scanf("%d", &x);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) 
    ? printf("Element is not present in array")
	: printf("Element is present at index %d", result);
	return 0;
}

