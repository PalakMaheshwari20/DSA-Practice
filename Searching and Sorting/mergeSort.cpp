#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int r){
    int m= l + (r-l)/2;
    int n1=m-l+1, n2=r-m;
    int left[n1],right[n2];
    int mainArrayIndex=l;
    for(int i=0;i<n1;i++){
        left[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex = m +1;
    for(int i=0;i<n2;i++){
        right[i]=arr[mainArrayIndex++];
    }
    int i=0,j=0;
    mainArrayIndex=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[mainArrayIndex++]=left[i++];
        else
            arr[mainArrayIndex++]=right[j++];
    }
    while(i<n1){
        arr[mainArrayIndex++]=left[i++];
    }
    while(j<n2){
        arr[mainArrayIndex++]=right[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r){
        int m= l + (r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,r);
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
    mergeSort(arr,0,n-1);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}