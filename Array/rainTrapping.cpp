#include<bits/stdc++.h>
using namespace std;

int trapRain(int arr[],int n)
{
    //Naive solution   (TC: O(N^2) SC: O(1))
    /*int ans=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int k=i+1;k<n;k++){
            rmax=max(rmax,arr[k]);
        }
        ans+=(min(lmax,rmax)-arr[i]);
    }
    return ans;*/

    //Efficient solution    (TC: O(N) SC: O(N))
    int ans=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],lmax[i+1]);
    }
    for(int i=1;i<n-1;i++){
        ans+=(min(lmax[i],rmax[i])-arr[i]);
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
    cout<<"Ans: "<<trapRain(arr,n);
    
}