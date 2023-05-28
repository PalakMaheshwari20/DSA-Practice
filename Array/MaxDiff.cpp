//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
#include<bits/stdc++.h>
using namespace std;

int maxDifference(int arr[],int n){
    // Naive approach (TC: O(N^2) SC: O(1))
    /*int res= arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res= max(res,arr[j]-arr[i]);
        }
    }
    return res;
    */
    //Efficient approach (TC: O(N) SC: O(1))
    int res=arr[1]-arr[0],minVal=arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minVal);
        minVal=min(minVal,arr[i]);
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
    
    cout<<"Ans: "<<maxDifference(arr,n);
    return 0;
}