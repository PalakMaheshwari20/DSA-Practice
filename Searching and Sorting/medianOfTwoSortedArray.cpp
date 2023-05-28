#include<bits/stdc++.h>
using namespace std;

double findMedian(int arr1[], int n1, int arr2[], int n2)
{
    //Naive solution: here we can make another array and copy the elements of both the arrays, then sort it and if total 
    //elements is odd then answer is the middle element and if total elements is even then answer is average of mid and 
    //mid+1 (TC: O((n1+n2)*log(n1+n2)))

    //Efficient solution (TC: O(logN1) SC: O(1)
    int begin=0,end=n1;
    while(begin<=end){
        int i1=(begin+end)/2;
        int i2=(n1+n2+1)/2 - i1;
        int min1 = (i1==n1)?INT_MAX:arr1[i1];
        int max1 = (i1==0)?INT_MIN:arr1[i1-1];
        int min2 = (i2==n2)?INT_MAX:arr2[i2];
        int max2 = (i2==0)?INT_MIN:arr2[i2-1];
        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0)
                return ((double)max(max1,max2)+min(min1,min2))/2;
            else 
                return (double)(max(max1,max2));
        }
        else if(max1>min2){
            end=i1-1;
        }
        else
            begin=i1+1;
    }
    return -1;
}

int main(){
    int n1,n2;
    cout<<"Enter the size of array1: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the size of array2: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter array1 elements: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter array2 elements: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    cout<<"Median = "<<findMedian(arr1,n1,arr2,n2);
}