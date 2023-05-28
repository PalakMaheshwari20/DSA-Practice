#include<bits/stdc++.h>
using namespace std;

//Naive solution(TC: O(N^2) SC: O(1))
/*bool presentPair(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            if(arr[i]+arr[j]==target)
                return true;
    }
    return false;
}*/
//Tc: O(N) SC: O(N)
bool presentPair(int arr[],int n,int target){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(target-arr[i])!=s.end())
            return true;
        else
            s.insert(arr[i]);
    }
    return false;
}

int main(){
    int n,target;
    cout<<"Enter the size of array1: ";
    cin>>n;
    cout<<"Enter sum target: ";
    cin>>target;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(presentPair(arr,n,target))
        cout<<"True";
    else cout<<"False";
}