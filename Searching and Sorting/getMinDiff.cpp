#include<bits/stdc++.h>
using namespace std;

//Naive solution: (TC: O(N^2) SC: O(1))
/*int getMinDiff(int arr[],int n){
    int mini=INT_MAX;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++)
        {
            mini=min(mini,abs(arr[i]-arr[j]));
        }
    }
    return mini;
}*/

//Efficient solution (TC: O(NlogN) SC: O(1))
int getMinDiff(int arr[],int n){
    int res=INT_MAX;
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        res=min(res,arr[i],arr[i-1]);
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
    cout<<"Ans: "<<getMinDiff(arr,n);
}