#include<bits/stdc++.h>
using namespace std;

//T.C: O(N) 
//S.C: O(1) <----Extra space used      O(N) <----- space used
void rotate_by_one(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int n,num;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    rotate_by_one(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}