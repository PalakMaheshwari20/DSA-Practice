#include<bits/stdc++.h>
using namespace std;

int search_num(int arr[], int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
            return i;
    }
    return -1;
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
    cout<<"Enter element to be searched: ";
    cin>>num;
    int index = search_num(arr, n, num);
    if(index>-1)
        cout<<"Element found at index "<<index<<endl;
    else 
        cout<<"Element not found";

    
}