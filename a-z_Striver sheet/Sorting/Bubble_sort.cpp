#include <bits/stdc++.h>
using namespace std;

//Time Complexity: O(N^2) for worst and average case
//Space complexity: O(1) as no extra space was used in sorting of array
void bubble_sort(int arr[], int n) {
    for (int i=n-1; i>=0; i--) {
        int didSwap = 0;
        for (int j=0; j <= i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j + 1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        // We will check in the first iteration if any swap is taking place. 
        //If the array is already sorted no swap will occur and we will break out from the loops. 
        if (didSwap == 0) { 
            break;
        }
    }

    cout << "After Using bubble sort: " << "\n";
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
    bubble_sort(arr, n);
    return 0;

}