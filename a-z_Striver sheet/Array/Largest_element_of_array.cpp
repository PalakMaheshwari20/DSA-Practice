#include<bits/stdc++.h>
using namespace std;

//Brute-force approach: In this we sort the array and arr[n-1] is the largest element so here T.C: O(N*LOG(N)) and SC: O(1)

//Optimal approach : TC: O(N) SC: O(1)
int largestEle(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
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
     cout<<endl;
    cout<<"Largest element is "<<largestEle(arr,n)<<endl;
}