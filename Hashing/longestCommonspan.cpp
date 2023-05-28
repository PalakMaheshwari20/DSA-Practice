//Longest common span with same sum in binary array
#include<bits/stdc++.h>
using namespace std;

//Tc: O(N) SC: O(N)
int presentsubarray(int arr[], int n){
    unordered_map<int,int> s;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(prefix_sum==0)
            res=i+1;
        if(s.find(prefix_sum)==s.end())
            s.insert({prefix_sum,i});
        if(s.find(prefix_sum)!=s.end())
            res=max(res,i-s[prefix_sum]);
    }
    return res;
}

int findSubarray(int arr1[],int arr2[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr2[i]-arr1[i];
    }
    return presentsubarray(temp,n);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter array1 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter array2 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<"Ans: "<<findSubarray(arr1,arr2,n);
}