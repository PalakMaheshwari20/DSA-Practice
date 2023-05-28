#include<bits/stdc++.h>
using namespace std;

void prefixSum(int arr[],int n){
    for(int i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
}

int getSum(int arr[],int l,int r,int n){
    if(l!=0)
        return arr[r]-arr[l-1];
    else
        return arr[r];
}

int main(){
    int n,l,r;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n);
    cout<<"Enter l and r: ";
    cin>>l>>r;
    cout<<endl;
    cout<<getSum(arr,l,r,n);

}