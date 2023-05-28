#include<bits/stdc++.h>
using namespace std;

//Naive solution(TC: O(NlogN) SC: O(1))
/*int longestSubsequence(int arr[],int n){
    sort(arr,arr+n);
    int res=1,cur=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)
        {
            cur++;
        }
        else if(arr[i]!=arr[i-1]){
            res=max(res,cur);
            cur=1;
        }
    }
    return max(res,cur);
}*/

//Efficient approach (TC: THETA(N) SC: O(N))  for n elements in array there will be at max 2n lookups
//Logic behind space complexity: for first element there will be 2+(len-1) here len is length of the subsequence with the given element as first
//while for other elements there will be only one look up

int longestSubsequence(int arr[],int n){
    unordered_set<int> h(arr,arr+n); //linear work
    int res=1;
    for(auto x: h){
        if(h.find(x-1)==h.end()){
            int cur=1;
            while(h.find(x+cur)!=h.end())
                cur++;
            res=max(res,cur);
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
    cout<<"Ans: "<<longestSubsequence(arr,n);
}