#include<bits/stdc++.h>
using namespace std;


// stable algo
void naivePartition(int arr[], int l, int h, int p)
{
   int temp[h-l+1],index=0;
   for(int i=l;i<=h;i++){
    if(arr[i]<=arr[p] && i!=p)
        temp[index++]=arr[i];
   }
   temp[index++]=arr[p];
   for(int i=l;i<=h;i++){
    if(arr[i]>arr[p])
        temp[index++]=arr[i];
   }
   for(int i=l;i<=h;i++){
        arr[i]=temp[i];
   }
}

int main(){
    int n,p;
    cout<<"Enter the size of array and the pivot index: ";
    cin>>n>>p;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    naivePartition(arr,0,n-1,p);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}