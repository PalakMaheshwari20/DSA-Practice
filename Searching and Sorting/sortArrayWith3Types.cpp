#include<bits/stdc++.h>
using namespace std;

//three popular types in this question are: sort array of 0,1,2 ; 3 way partitioning, partition around a range
//naive solution(naive partition) for sorting array of 0,1,2  it takes TC: O(N) SC: O(N) traversing the array 3 times

void sort3types(int arr[],int n){
    int temp[n],i=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]==1){
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]==2){
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++){
        arr[j]=temp[j];
    }
}

//Efficient solution : use dutch national flag algorithm TC: O(N) SC: O(1) one traversal only

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort3types(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}