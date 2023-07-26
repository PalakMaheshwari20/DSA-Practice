#include <bits/stdc++.h>
using namespace std;

//Recursive insertion sort
//Time Complexity: O(N^2) for worst and average case AND O(N) for best case
//Space complexity: O(N) because it takes auxiliary stack space
void insertion_sort(int arr[], int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}


//Iterative insertion sort
//Time Complexity: O(N^2) for worst and average case AND O(N) for best case
//Space complexity: O(1) as no extra space was used in sorting of array
void insertion_sort(int arr[], int n) {
    
    for(int i=0; i<=n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    cout << "After Using insertion sort: " << "\n";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" "<<endl;
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
    insertion_sort(arr, n);
    return 0;

}