#include<bits/stdc++.h>
using namespace std;

int buyAndSell(int arr[],int start, int end){
    //Naive solution    (TC: O(N^2) SC: O(1))
    /*if(end<=start)
        return 0;
    int profit = 0;
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(arr[j]>arr[i]){
                int cur_profit = arr[j]-arr[i]+buyAndSell(arr,start,i-1)+buyAndSell(arr,j+1,end);
                profit=max(cur_profit,profit);
            }
        }
    }
    return profit;*/
    int n=start+end+1;
    //Efficient Solution(TC: O(N) SC: O(1))
    int profit=0;       
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            profit+=arr[i]-arr[i-1];
    }
    return profit;
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
    cout<<"Ans: "<<buyAndSell(arr,0,n-1);
    
}