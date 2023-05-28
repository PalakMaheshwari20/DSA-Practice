#include<bits/stdc++.h>
using namespace std;

void calFrequency(int arr[],int n){
    int i=1,freq=1;
    while(i<n){
        while(i<n && arr[i-1]==arr[i]){
            i++;
            freq++;
        }
        cout<<arr[i-1]<<"  "<<freq<<endl;
        i++;
        freq=1;
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
    cout<<endl;
    calFrequency(arr,n);
    return 0;
}