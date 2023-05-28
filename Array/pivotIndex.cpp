#include<bits/stdc++.h>
using namespace std;

int pivotindex(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int leftsum=0;
    int rightsum=sum;
    for(int i=0;i<n;i++){
        rightsum -=arr[i];
        if(leftsum==rightsum)
            return i;
        leftsum +=arr[i];
    }
    return -1;
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
    cout<<"Ans: "<<pivotindex(arr,n);
}