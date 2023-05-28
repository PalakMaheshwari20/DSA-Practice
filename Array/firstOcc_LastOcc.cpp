#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k){
	int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(k > arr[mid]) {//Right me jaa
            s = mid + 1;
        }
        else if(k < arr[mid]) {//left me jaa
            e = mid - 1;
        }

        mid = (s+e)/2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int k){
	int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(k > arr[mid]) {//Right me jaa
            s = mid + 1;
        }
        else if(k < arr[mid]) {//left me jaa
            e = mid - 1;
        }

        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"Enter number: ";
     cin>>k;
    cout<<firstOcc(arr,n,k)<<" "<<lastOcc(arr,n,k);
}