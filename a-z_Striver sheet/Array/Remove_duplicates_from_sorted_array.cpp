#include<bits/stdc++.h>
using namespace std;

//Brute-force approach: T.C : O(Log(N)+N)   S.C: O(N)
int remove_duplicates1(int arr[], int n){
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    int j=0;
    for(auto it: st)
    {   arr[j]=it;
        j++;
    }
    return j;
}

//Optimal approach: Two pointer approach---> T.C: O(N) S.C: O(1)
int remove_duplicates(int arr[], int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
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
    cout<<"Total number of distinct elements are: "<<remove_duplicates(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}