#include<bits/stdc++.h>
using namespace std;

int remove(int arr[],int n){
    //naive approach (TC: O(N),SC: O(N))
    // int temp[50];
    // temp[0]= arr[0]; //coz first element will be there in answer even if its repeating or not doesn't matter
    // int res= 1;
    // for(int i=1;i<n;i++){
    //     if(temp[res-1]!=arr[i]){
    //         temp[res]=arr[i];
    //         res++;
    //     }
    // }
    // for(int i=0;i<res;i++){
    //     arr[i]=temp[i];
    // }
    // return res;

    /*Efficient approach (TC: O(N),SC: O(1))*/
    //here we are keeping to counters one is tracking the distinct element count and the other is iterating further
    int res=1; 
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
   return res;

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
    int x=remove(arr,n);
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}