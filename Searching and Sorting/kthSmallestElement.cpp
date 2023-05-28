#include<bits/stdc++.h>
using namespace std;

//Naive solution : sort the array and return arr[k-1] but here the array gets modified (TC: O(NlogN) SC: O(1))
//efficient solution (TC: O(N^2) in worst case ,O(n) in average case)

int partition(int arr[], int l, int h)
{   
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int kthSmallest(int arr[],int n,int k){
    int l=0,r=n-1;
    while(l<=r){
        int p=partition(arr,l,r);
        if(p==k-1)
            return arr[p];
        else if(p<k-1)
            l=p+1;
        else
            r=p-1;
    }
    return -1;
}
 

int main(){
    int n,k;
    cout<<"Enter the size of array and which smallest element: ";
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<kthSmallest(arr,n,k);
}