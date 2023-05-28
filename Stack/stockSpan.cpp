#include<bits/stdc++.h>
using namespace std;

//TC: O(N) SC: O(N)
vector<int> greaterLeft(int arr[],int n){
    stack<pair<int,int>> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.empty())
            v.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i])
            v.push_back(s.top().second);
        else{
            while(s.size()>0 && s.top().first<arr[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    for(int i=0;i<n;i++){
        v[i]=i-v[i];
    }
    return v;
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
    vector<int> v=greaterLeft(arr,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}