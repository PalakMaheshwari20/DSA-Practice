#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n,int k){
    //Naive solution (TC: O(N^2) SC: O(1))
    /*int max_sum = INT_MIN;
	for(int i = 0; i + k - 1 < n; i++)
	{
		int sum = 0;
		for(int j = 0; j < k; j++)
		{
			sum += arr[i+j];
		}
		max_sum = max(max_sum, sum);
	}
	return max_sum;*/

    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int maxSum=sum;
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        maxSum=max(sum,maxSum);
    }
    return maxSum;
}

int main(){
    int n,k;
    cout<<"Enter the size of array and k: ";
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ans: "<<maxSum(arr,n,k);
    
}