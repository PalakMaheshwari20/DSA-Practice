#include<bits/stdc++.h>
using namespace std;

//TC: O(N) SC: O(N)
vector<int> nextGreaterRight(int arr[], int n){
    stack<int> s;
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0)
            v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
            v.push_back(s.top());
        else{
            while(s.size()>0 && s.top()>=arr[i])
                s.pop();
            if(s.size()==0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end()); 
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
    vector<int> v=nextGreaterRight(arr,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}