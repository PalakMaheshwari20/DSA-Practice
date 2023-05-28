#include<bits/stdc++.h>
using namespace std;
//TC: O(N) SC: O(1)
int largestEle(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
            res=i;
    }
    return res;
}

//TC: O(N) SC: O(1)
int seclargestEle(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest = i;
        }
        else{
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
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
    cout<<"Elements are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Index of largest element "<<largestEle(arr,n)<<endl;
    cout<<"Index of second largest element "<<seclargestEle(arr,n);

}