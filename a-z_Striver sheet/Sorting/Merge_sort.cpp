#include<bits/stdc++.h>
using namespace std;

//Time Complexity: O(N*LOG(N)) for worst and average case and best case....At each step, we divide the whole array, for that 
//logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn
//Space complexity: O(N) as we are using a temporary array to store elements in sorted order.
void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp; 
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
      if (arr[left] <= arr[right]) {
        temp.push_back(arr[left]);
        left++;
      }
      else{
          temp.push_back(arr[right]);
          right++;
      }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l==r) return;
    int mid=(l+r)/2;
    // Write Your Code Here
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout << endl;
    mergeSort(arr, 0, n);
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;

}