#include<bits/stdc++.h>
using namespace std;

//T.C: O(N)
int largestEle(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
        {
            res=arr[i];
        }
    }
    return res;
}

//Brute-force approach: In this we sort the array and arr[n-1] is the largest element so here T.C: O(N*LOG(N))+O(N)  and SC: O(1)
//Here O(N*LOG(N)) for sorting the array and in worst case if second largest does't exist or is at first index then array will be traversed so O(N)

int seclargestEle(int arr[], int n)
{
    int secondLargest=-1;   //in case second largest doesn't exist
    int largest=arr[n-1];
    sort(arr,arr+n);    //N*LOG(N)
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=largest)
            secondLargest=arr[i];
        break;
    }
    return secondLargest;
}

//Better Approach: O(N+N)---> O(N) for finding the largest element and O(N) for traversing array and finding the second largest
int seclargestEle(int arr[], int n)
{
    int secondLargest=-1;   //in case second largest doesn't exist
    int largest=largestEle(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest && arr[i]>secondLargest)
            secondLargest=arr[i];
    }
    return secondLargest;
}

//Optimal approach: O(N) 
int seclargestEle(int arr[], int n)
{
    //considering all array elements are positive, if not so we will take INT_MIN instead of -1
    int secondLargest=-1;   
    int largest=0;  
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest)
        {
            secondLargest=arr[i];
        }
    }
    return secondLargest;
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
    cout<<"Second Largest element is "<<seclargestEle(arr,n)<<endl;
}