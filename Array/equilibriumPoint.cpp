#include<bits/stdc++.h>
using namespace std;

bool checkEquilibrium(int nums[], int n)
{
	/*for(int i=0;i<n;i++)
	{
		int lsum = 0, rsum = 0;
		for(int j = 0; j < i; j++)
			lsum += arr[j];
		for(int j = i + 1; j < n; j++)
			rsum += arr[j];
		if(lsum == rsum)
			return true;
	}
	return false;*/

    int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int lsum = 0;
        int rsum = sum;
        for(int i=0;i<n;i++){
            rsum-=nums[i];
            if(lsum==rsum)
                return true;
            lsum +=nums[i];
        }
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
    cout<<endl;
    if(checkEquilibrium(arr,n))
        cout<<"Found";
    else 
        cout<<"Not found";
}