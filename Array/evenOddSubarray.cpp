#include<bits/stdc++.h>
using namespace std;

int longestEOSubarray(int arr[],int n){
    //Naive solution (TC: O(N^2) SC: O(1))
    /*int res=1;
    for(int i=0;i<n;i++){
        int cur=1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2!=0 && arr[j-1]%2==0)||(arr[j-1]%2!=0 && arr[j]%2==0))
                cur++;
            else
                break;
        }
        res=max(res,cur);
    }
    return res;*/

    //Efficient solution (TC: O(N) SC: O(1))
    int res=1;
    int cur=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2!=0 && arr[i-1]%2==0)||(arr[i-1]%2!=0 && arr[i]%2==0)){
            cur++;
            res=max(res,cur);
        }
        else
            cur=1;
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
    cout<<"Ans: "<<longestEOSubarray(arr,n);  
}