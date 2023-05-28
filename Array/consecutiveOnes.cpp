#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(int arr[],int n){
    //Naive solution (TC: O(N^2) SC: O(1))
    /*int res=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
        if(arr[j]==1)
            curr++;
        else
            break;
        }
        res=max(curr,res);
    }
    return res;*/

    //Efficient solution (TC: O(N) SC(1))
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            curr=0;
        else{
            curr++;
            res=max(curr,res);
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
    cout<<"Ans: "<<consecutiveOnes(arr,n);
    
}