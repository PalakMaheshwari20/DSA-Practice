#include<bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int N)
{
    //TC: O(LogN) SC: O(1)
    //Non-increasing sorted 
   /* int s=0,e=N-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==1)
            s=mid+1;
        else if(arr[mid]==0)
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return mid;*/

    //Increasing sorted 
    int s=0,e=N-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==1)
            e=mid-1;
        else if(arr[mid]==0)
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return N-mid;
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
    cout<<"Count = "<<countOnes(arr,n);
}