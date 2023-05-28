#include<bits/stdc++.h>
using namespace std;

//three popular types in this question are: segregate +ve and -ve, segregate odd and even, sort binary array
//naive solution(naive partition) for segregating +ve and -ve it takes TC: O(N) SC: O(N) traversing the array 3 times

/*void sort2types(int arr[],int n){
    int temp[n],i=0;
    for(int j=0;j<n;j++){
        if(arr[j]<0){
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=0){
            temp[i]=arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++){
        arr[j]=temp[j];
    }
}*/

//Efficient solution : a varition of partition funtion of quicksort,hoare or lomuto both can solve this in TC: O(N) and SC: O(1)
//using hoare partition here

void sort2types(int arr[],int n){
    int i=-1,j=n;
    while(true){
        do{
            i++;
        }while(arr[i]<0);
        do{
            j--;
        }while(arr[j]>=0);
        if(i>=j)
            return;
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
    cout<<"Hello";
    sort2types(arr,n);
    cout<<"hii";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}