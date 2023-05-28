#include<bits/stdc++.h>
using namespace std;

void leaderInArray(int arr[],int n){
    // Naive approach : TC: O(N^2) SC: O(1)
    /*for(int i=0;i<n;i++)
	{
		bool flag = false;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i]<=arr[j])
			{
				flag = true;
				break;
			}
		}
		if(flag==false)
		{
			cout<<arr[i]<<" ";
		}
	}*/

    // Efficient approach: TC: O(N) SC: O(1) Here we traverse from end and print the leader but here answer will be printed in reverse order
    int cur_leader=arr[n-1];
    cout<<cur_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>cur_leader)
        {
            cur_leader=arr[i];
            cout<<cur_leader<<" ";
        }
    }
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
    
    leaderInArray(arr,n);
    return 0;
}