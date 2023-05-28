#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int low, int high){
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]>k)
            high=mid-1;
        else
            low=mid+1;
        int mid=low+(high-low)/2;
    }
    return mid;
}


int searchArray(int arr[], int k)
{
    //Naive solution  TC: O(position where element is found) SC: O(1)
    int i=0;
    while(true){
        if(arr[i]==k)
            return i;
        if(arr[i]>k)
            return -1;
        i++;
    }
    //Efficient solution TC: O(log(position where element is found)) SC: O(1)
    while(i){
    if(arr[0]==k)
        return 0;
    while(i>0){
    if(arr[i]<k)
        i=i*2;
    }
    if(arr[i]==k)
        return i;
    return binarySearch(arr,k,(i/2)+1,i);
    }
}

int main(){
    int n,k;
    cout<<"Enter the size of array and element to be searched: ";
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Position index = "<<searchArray(arr,k);
}