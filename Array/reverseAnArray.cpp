#include<bits/stdc++.h>
using namespace std;

//using 2 pointers we can swap the low and high indexes, here loop needs to run only N/2 times, TC: O(N) SC: O(1)

void reverse(int arr[],int n){
    int l=0,h=n-1;
    while(l<h){
        int temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"Elements after reversing are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}