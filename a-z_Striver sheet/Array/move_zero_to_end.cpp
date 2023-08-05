#include<bits/stdc++.h>
using namespace std;

//Brute-force Approach: Using temporary array......save all zeros in temp array and fill the original array accordingly
// T.C: O(2N) S.C: O(N)--> In worst case no element is zero
void moveZeroToEnd(int arr[], int n)
{
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
            temp.push_back(arr[i]);
    }
    for(int i=0;i<temp.size();i++)
    {
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++)
    {
        arr[i]=0;
    }
}

//Better approach : TC: O(N^2) SC: O(1)
void moveZeroToEnd(int arr[],int n){
    for(int i=0;i<n;i++)
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
    }
}

//optimal Approach : T.C: O(N) S.C: O(1)
//here we are ignoring 0 and keeping count of non-zero number and count is the index where first zero exists
void moveZeroToEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
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
    moveZeroToEnd(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}