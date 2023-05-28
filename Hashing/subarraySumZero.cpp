#include<bits/stdc++.h>
using namespace std;

//Naive solution(TC: O(N^2) SC: O(1))
/*bool presentsubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int cur_sum=0;
        for(int j=i;j<n;j++)
        {
            cur_sum+=arr[j];
            if(cur_sum==0)
                return true;
        }
    }
    return false;
}*/

//Tc: O(N) SC: O(N)
bool presentsubarray(int arr[],int n){
    unordered_set<int> s;
    int prefix_sum=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(s.find(arr[i])!=s.end())
            return true;
        if(prefix_sum==0)
            return true;
        s.insert(arr[i]);
    }
    return false;
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
    if(presentsubarray(arr,n))
        cout<<"True";
    else cout<<"False";
}