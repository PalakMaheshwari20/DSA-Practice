#include<bits/stdc++.h>
using namespace std;

int normalSumSubarray(int arr[],int n){
    int res=arr[0],maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}

int circularSubarray(int arr[],int n){
    //Naive solution (TC: O(N^2) SC: O(1))
    /*int res=0;
    for(int i=0;i<n;i++){
        int cur_sum=arr[i];
        int cur_max=arr[i];
        for(int j=1;j<n;j++){
            int idx=(i+j)%n;
            cur_sum+=arr[idx];
            cur_max=max(cur_sum,cur_max);
        }
        res=max(cur_max,res);
    }
    return res;*/
    int arr_sum=0;
    int max_normal=normalSumSubarray(arr,n);
    if(max_normal<0)
        return max_normal;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum + normalSumSubarray(arr,n);
    return max(max_circular,max_normal);

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
    cout<<"Ans: "<<circularSubarray(arr,n);  
}