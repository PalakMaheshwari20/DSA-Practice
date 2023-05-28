#include<bits/stdc++.h>
using namespace std;

int uniontArray(int arr1[],int arr2[],int n,int m){
    unordered_set s(arr1,arr1+n);
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    return s.size();
}

int main(){
    int n,m;
    cout<<"Enter the size of array1: ";
    cin>>n;
    cout<<"Enter the size of array2: ";
    cin>>m;
    int arr1[n];
    int arr2[m];
    cout<<"Enter array1 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter array2 elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<uniontArray(arr1,arr2,n,m);    
}