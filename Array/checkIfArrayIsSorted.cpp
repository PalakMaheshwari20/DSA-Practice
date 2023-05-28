#include<bits/stdc++.h>
using namespace std;

//naive approach: check for every element the entire array if there exists any smaller element then return false.(so TC: O(N^2) SC: O(1))
//efficient approach: in one traversal just check if the previous element is greater than the current or not(so TC: O(N) SC: O(1))
bool isSort(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
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
    if(isSort(arr,n))
        cout<<"Array is sorted!!";
    else 
        cout<<"Array is not sorted";
}