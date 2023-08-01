#include<bits/stdc++.h>
using namespace std;

//T.C: O(N) S.C: O(1)
bool is_sorted(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else
            return false;
    }
    return true;
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
    if(is_sorted(arr,n))
        cout<<"Sorted";
    else 
        cout<<"Not sorted";
}