#include<bits/stdc++.h>
using namespace std;


//Naive solution TC:O(N^2) SC: O(1)
/*int countDiscount(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
            res++;
    }
    return res;
}*/

//Efficient solution TC: O(N) SC: O(N)
/*int countDiscount(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}*/

//Improved Efficient solution TC: O(N) SC: O(N)
int countDiscount(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
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
    int res=countDiscount(arr,n);
    // for(int i=0;i<res;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<res;
}