#include<bits/stdc++.h>
using namespace std;

int consecutive_1s(int arr[], int n)
{
    int count=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            ans=max(ans,count);
        }
        else if(arr[i]==0)
            count=0;
    }
    return ans;
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
    cout<<consecutive_1s(arr,n);

    
}