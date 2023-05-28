#include<bits/stdc++.h>
using namespace std;

//Naive solution(TC: O(N^2) SC: O(1))
/*int lengthOfsubarray(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int c0=0,c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
                c0++;
            if(arr[j]==1)
                c1++;
            if(c1==c0)
                res=max(res,c0+c1);
        }
    }
    return res;
}*/

//Tc: O(N) SC: O(N)
int lengthOfsubarray(int arr[],int n){
    unordered_map<int,int> s;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            arr[i]=-1;
    }
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

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<lengthOfsubarray(arr,n);
}