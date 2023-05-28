#include<bits/stdc++.h>
using namespace std;

//(TC: O(NlogN) SC: O(1))
int chocolateDistribution(int arr[],int n,int m){
   if(m>n)  
    return -1;
   sort(arr,arr+n);
   int res=arr[m-1]-arr[0];
   for(int i=1;i+m-1<n;i++){
        res=min(res,arr[i+m-1]-arr[i]);
   }
   return res;
}

int main(){
    int n,m;
    cout<<"Enter the size of array and m: ";
    cin>>n>>m;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<chocolateDistribution(arr,n,m);
}