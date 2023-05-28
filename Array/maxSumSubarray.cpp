#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    //Naive solution (TC: O(N^2) SC: O(1))
    /*int sum=0;
    for(int i=0;i<n;i++){
        int curSum=0;
        for(int j=i;j<n;j++){
            curSum+=arr[i];
            sum=max(sum,curSum);
        }
    }
    return sum;*/

    int ans = arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i] ,arr[i]);
        ans=max(maxEnding,ans);
    }
    return ans;
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
    cout<<"Ans: "<<maxSum(arr,n);
    
}