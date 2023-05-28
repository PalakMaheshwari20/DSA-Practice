#include<bits/stdc++.h>
using namespace std;

//Naive solution(TC: O(N^2) SC: O(1))
/*int presentsubarray(int arr[],int n,int target){
    int res=0;
    for(int i=0;i<n;i++){
        int cur_sum=0;
        for(int j=i;j<n;j++)
        {
            cur_sum+=arr[j];
            if(cur_sum==target)
                res=max(res,j-i+1);
        }
    }
    return res;
}*/

//Tc: O(N) SC: O(N)
int presentsubarray(int arr[],int n,int target){
    unordered_map<int,int> s;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];
        if(prefix_sum==target)
            res=i+1;
        if(s.find(prefix_sum)==s.end())
            s.insert({prefix_sum,i});
        if(s.find(prefix_sum-target)!=s.end())
            res=max(res,i-s[prefix_sum-target]);
    }
    return res;
}

int main(){
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the target: ";
    cin>>target;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<presentsubarray(arr,n,target);
}