#include<bits/stdc++.h>
using namespace std;

//not stable algo
//here the pivot is at its correct position
//Also if we want to take any index as pivot other than the last element then we need to suppose we take index p as pivot then before begining with lomuto partitioning we just need to begin with swap(arr[p],arr[last_index]);

//(TC: O(N) SC: O(1))
void lomutoPartition(int arr[], int l, int h)
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
//    return i+1;
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
    lomutoPartition(arr,0,n-1);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}