#include<bits/stdc++.h>
using namespace std;


//Naive solution TC:O(N^2) SC: O(1)
/*void countFrequency(int arr[],int n){
    // cout<<"hii";
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]=arr[j])
            {
                flag=true;
                break;
            }
        }
            if(flag==true)
                continue;
            int freq=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j])
                    freq++;
            }
        cout<<arr[i]<<" "<<freq;
    }
}*/

//Efficient solution TC:O(N) SC:O(N)
/*void countFrequency(int arr[],int n){
unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
for(auto it: mp){
    cout<<it.first<<" "<<it.second;
}
}*/

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countFrequency(arr,n);
    
}