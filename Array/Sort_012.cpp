#include<bits/stdc++.h>
using namespace std;

//brute force: sort the array (TC: NlogN SC: O(1))
//better: Count the occurence of 0,1,2 (TC: O(2N) one loop for counting and one for placing SC: O(1))
//optimal: use 3 pointer low,mid,high (TC: O(N) SC: O(1))
void sort_012(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(arr[mid])
        {
            case 0: swap(arr[low],arr[mid]);
                    low++;
                    mid++;
                    break;
            case 1: mid++;
                    break;
            case 2: swap(arr[mid],arr[high]);
                    high--;
                    break;
        }
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
    cout<<"Elements before sorting are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sort_012(arr,n);
    cout<<"Elements after sorting are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}