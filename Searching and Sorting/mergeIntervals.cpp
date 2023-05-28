#include<bits/stdc++.h>
using namespace std;

//naive solution is to compare every element with all the other elemets and check if the first element lies b/w any interval i.e start = min(i1.start,i2.start) and end= max(i1.end,i2.end) and then we need to delete the other interval which makes this solution of TC: O(N^3)

//efficient solution
struct Interval{
    int s,e;
};

bool mycomp(Interval a, Interval b)  
{ return a.s < b.s; }

int mergeIntervals(Interval arr[], int n){
    int res=0;
    sort(arr,arr+n,mycomp);  
    for (int i=1; i<n; i++)  
    {  
        if (arr[res].e >=  arr[i].s)  
        {   
            arr[res].e = max(arr[res].e, arr[i].e);  
            arr[res].s = min(arr[res].s, arr[i].s);  
        }  
        else { 
            res++; 
            arr[res] = arr[i];  
        }     
    }  
    return res;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    Interval arr[n];
    cout<<"Enter interval elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i].s;
        cin>>arr[i].e;
    }
    int ans= mergeIntervals(arr,n);
    // sort(arr,arr+n,mycomp);
    for(int i=0;i<=ans;i++){
        cout<<arr[i].s<<" "<<arr[i].e<<endl;
    }
}