#include<bits/stdc++.h>
using namespace std;

bool givenSum(int arr[],int n,int sum){
   int cur_sum=arr[0];
   for(int i=0;i<n;i++){
    if(cur_sum>sum && i<n){
        cur_sum-=arr[i];
    }
    if (cur_sum==sum) {
			return 1; 
	} 
    if (i < n) 
		cur_sum += arr[i]; 
   }
   return 0;
}

int main(){
    int n,sum;
    cout<<"Enter the size of array and target sum: ";
    cin>>n>>sum;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(givenSum(arr,n,sum))
        cout<<"Exist";
    else
        cout<<"Does not exist";
}