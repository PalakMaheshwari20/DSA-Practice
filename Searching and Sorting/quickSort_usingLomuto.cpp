#include<bits/stdc++.h>
using namespace std;

//Follows D&C
//its partitions array in 2 halves and 2 halves need not to be of equal size
//in merge sort merge function is complex here partition function is complex
//Average case TC: O(nlogn)
//Worst case TC: O(N^2) despite this it is considered better than merge sort because of in-place(does not use auxillary array just use recursion call stack............lomuto and hoare partition are in-place itself),cache friendly
//its tail recursive: if a recursive function does recursive call in the end

//quicksort is prefered for sorting if stability is not required but if stability is required then merge sort is prefered

int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quickSort(int arr[],int l, int h){
    if(l<h){
        int p=partition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
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
    quickSort(arr,0,n-1);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}