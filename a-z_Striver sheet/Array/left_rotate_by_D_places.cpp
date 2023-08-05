#include<bits/stdc++.h>
using namespace std;

void rotate_by_one(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

//Naive approach: call rotate_by_one function d times
void rotate_by_D1(int a[], int n, int d)
{
    for(int i=0;i<d;i++)
        rotate_by_one(a,n);
}

//Better approach: T.C: O(N) S.C: O(d)
void rotate_by_D2(int a[], int n, int d)
{
    if (n == 0)
        return;
    d = d % n;
    if (d > n)
     return;
    int j=0;
    int temp[n];
    for(int i=0;i<d;i++)
        temp[i]=a[i];
    for(int i=d;i<n;i++)
        a[i-d]=a[i];
    for(int i=n-d;i<n;i++)
        a[i]=temp[i-(n-d)]; //j can also  be replaced by j=i-(n-d)
}

//Optimal approach: T.C: O(N) S.C: O(1)
void rotate_by_D(int a[], int n, int d)
{
    if (n == 0)
        return;
    d = d % n;
    if (d > n)
     return;
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}

int main(){
    int n,d;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter places by which you want to rotate: ";
    cin>>d;
    rotate_by_D(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}