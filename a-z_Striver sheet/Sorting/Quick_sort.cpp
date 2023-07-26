#include<bits/stdc++.h>
using namespace std;

//Time Complexity: O(N*LOG(N)) for average case and best case....At each step, we divide the whole array, for that 
//log(N) and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn

//Time Complexity in Worst case: O(N^2) when the array is sorted or reverse sorted, the partition algorithm divides the array in two sub-arrays with 0 and n-1 elements.  

//Space complexity: O(1)+O(N)) as we are not using any extra array to store elements also for recursion stack space.
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(pivot>=arr[i] && i<=high-1)
        {
            i++;
        }
        while(pivot<arr[j] && j>=low-1)
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pIndex=partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
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
    quickSort(arr, 0, n);
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;

}