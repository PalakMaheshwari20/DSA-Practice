#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
   //basic bubble sort  (TC: O(N^2) SC: O(1))
   /*for (int i = 0; i < n-1; i++)
   {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }      
   }*/

   //optimised bubble sort    It just help when the array becomes sorted or was already sorted
   for (int i = 0; i < n-1; i++)
   {
        bool swapped=false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }     
        if(swapped==false)
            break;
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
    bubbleSort(arr,n);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}