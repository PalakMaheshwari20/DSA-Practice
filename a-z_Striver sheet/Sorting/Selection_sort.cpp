#include <bits/stdc++.h>
using namespace std;

//Time Complexity: O(N^2) (N*(N-1)/2) for best, worst and average case
//Space complexity: O(1) as no extra space was used in sorting of array
void selection_sort(int arr[], int n) {
    for(int i=0; i<=n-2; i++)
    {
        int mini=i;
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]<arr[mini])
                mini=j;
        }
        swap(arr[i],arr[mini]);
    }

    cout << "After Using selection sort: " << "\n";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    selection_sort(arr, n);
    return 0;

}