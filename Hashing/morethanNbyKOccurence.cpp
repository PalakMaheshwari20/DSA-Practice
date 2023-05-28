#include<bits/stdc++.h>
using namespace std;

//Naive solution TC: O(NlogN)
/*void nBykOccurence(int arr[], int n, int k){
    sort(arr,arr+n);
    int count=1,i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        if(count>n/k)
            cout<<arr[i-1]<<" ";
        count=1;
        i++;
    }
}*/

//Efficient solution TC: O(N)
void nBykOccurence(int arr[], int n, int k){
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto x: m){
        if(x.second>n/k)
            cout<<x.first<<" ";
    }
}

int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nBykOccurence(arr,n,k);
}