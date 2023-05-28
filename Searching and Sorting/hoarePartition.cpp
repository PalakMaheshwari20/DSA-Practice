#include<bits/stdc++.h>
using namespace std;

//not stable algo
//here we take pivot as first element
//it take less time as compared to lomuto partition also does less number of comparision when compared to lomuto partition
//here the pivot is not at its correct position instead it gives an index from which all the left elements are smaller and all the right elemnts are greater or equal to pivot element
void hoarePartition(int arr[], int l, int h)
{
   int pivot=arr[l];
   int i=l-1,j=h+1;
   while(true){
    do{
        i++;
    }while(arr[i]<pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    if(i>=j){
       // return j; //index from which all the left elements are smaller and all the right elemnts are greater or equal to pivot element
       return;
    }
    swap(arr[i],arr[j]);
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
    hoarePartition(arr,0,n-1);
     cout<<"Sorted array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}