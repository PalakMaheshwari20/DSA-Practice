#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){
    //Naive solution (TC: O(N^2) SC: O(1))
    /*for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count>n/2)
                return count;
    }
    return -1;*/

    //Efficient solution (TC: O(N) SC: O(1))
    int res=0,count=1;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
            count++;
        else count--;
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
            count++;
    }
    if(count>n/2)
        return count;
    return -1;

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
    cout<<"Ans: "<<majorityElement(arr,n);
    
}