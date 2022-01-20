#include<iostream>
using namespace std;
int binarySearch(int *arr, int n, int x){
	int lo,hi;
	lo=0;
	hi=n-1;
	while(lo<hi){
		int mid= lo + (x - arr[lo]) *(hi - lo)/(arr[hi] - arr[lo]);
		if(x==arr[mid])
				return mid;
		else if(arr[mid]>x)		
		  hi=mid-1;
		else
		  lo=mid+1;
	}
	return -1;
}
int main()
{
	int array[]={1,1,1,1,1};
	int size=sizeof(array)/sizeof(array[0]);
	int key=1;
	cout<<binarySearch(array,size,key);
}

