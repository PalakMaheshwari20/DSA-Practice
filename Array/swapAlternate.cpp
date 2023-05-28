#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int n){
    int i=0;
    while((i+1)<n){
        swap(arr[i],arr[i+1]);
        i+=2;
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
    swapAlternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}