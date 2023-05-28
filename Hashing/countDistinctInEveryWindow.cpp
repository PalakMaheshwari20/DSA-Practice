#include<bits/stdc++.h>
using namespace std;

//no of windows of size k in array of size n where k<=n is n-k+1

/*void countDistinct(int arr[],int n,int k){
    for(int i=0;i<n-k+1;i++){
        int count=0;
        for(int j=0;j<k;j++){
            bool flag = false;
            for(int p=0;p<j;p++){
                if(arr[i+j]==arr[i+p]){
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                count++;
        }
        cout<<count<<" ";
    }
}*/

//Efficient solution TC: O(N) SC: O(K)
void countDistinct(int arr[],int n,int k){
    map<int, int> m;
    for(int i=0;i<k;i++){
        m[arr[i]]+=1;
    }
    cout<<m.size()<<" ";
    for(int i=k;i<n;i++){
        m[arr[i-k]]-=1;
        if(m[arr[i-k]]==0)
            m.erase(arr[i-k]);
        m[arr[i]]+=1;
        cout<<m.size()<<" ";
    }
    
}


int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the size of window: ";
    cin>>k;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countDistinct(arr,n,k);
}