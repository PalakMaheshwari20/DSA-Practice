#include<bits/stdc++.h>
using namespace std;

int pivotElement(int arr[], int n)
{
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else if(arr[mid]<arr[n-1]){
                e = mid;
            }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int k){
	int mid = s +(e-s)/2;
	while(s<=e){
		if(arr[mid]>k){
			e = mid - 1;
		}
		else if(arr[mid]<k){
			s = mid + 1;
		}
		else {
			return mid;
		}
		mid = s +(e-s)/2;
	}
	return -1;
}

int findPosition(int arr[], int n, int k)
{
   
	int pivot = pivotElement(arr,n), pos = -1;
		if(k<=arr[n-1] && k>=arr[pivot])
			pos = binarySearch(arr,pivot,n-1,k);
		else
			pos = binarySearch(arr,0,pivot-1,k);
	return pos;
}

int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element to be searched: ";
    cin>>k;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<findPosition(arr,n,k);  
}