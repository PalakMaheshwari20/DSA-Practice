#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void reverse(int arr[],int low,int high){
    while(low<high){
    swap(arr[low++],arr[high--]);
    }
}

void rotateByD(int arr[],int n,int d){
    //Naive approach (TC: d*theta(n) SC: O(1))
    /*for(int i=0;i<d;i++){
        leftRotateByOne(arr,n);
    }*/

    //Better Approach (TC: theta(N) SC: theta(d))
   /* int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[n-d+i]=temp[i];
    }*/

    //Optimal Approach (TC: theta(n), SC: theta(1))
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}

int main(){
    int n,d;
    cout<<"Enter the size of array and amount which u want to rotate: ";
    cin>>n>>d;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateByD(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}