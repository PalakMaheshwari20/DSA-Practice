#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
   //basic selection sort  (TC: O(N^2) SC: O(1))
   /*int temp[n];
   for(int i=0;i<n;i++){
    int min_index=0;
    for(int j=1;j<n;j++){
        if(arr[j]<arr[min_index])
            min_index=j;
    }
    temp[i]=arr[min_index];
    arr[min_index]=INT_MAX;
   }
   for(int i=0;i<n;i++){
    arr[i]=temp[i];
   }*/

   //optimised selection sort    space complexity is optimized
   

   for(int i = 0; i < n; i++){
        int min_ind = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        
        swap(arr[i], arr[min_ind]);
    }
    
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
    selectionSort(arr,n);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}