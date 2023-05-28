#include<bits/stdc++.h>
using namespace std;

void moveZeros(int arr[],int n){
    //naive approach (TC: O(N^2) SC: O(1))
    /*for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    i++;
                }
            }
        }
    }*/

    //Efficient Approach (TC: O(N), SC: O(1))
    int count=0;
    for(int i=0;i<n;i++){//here we are ignoring 0 and keeping count of non-zero number and count is the index where first zero exists
        if(arr[i]!=0)
            {
                swap(arr[i],arr[count]);
                count++;
            }
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
    moveZeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}