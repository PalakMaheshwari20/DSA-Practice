#include<bits/stdc++.h>
using namespace std;


/*int intersectArray(int arr1[],int arr2[],int n,int m){
    int res=0;
    // int num=n>m?n:m;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(arr1[i]==arr1[j]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            continue;
        }
        // int no=n>m?m:n;
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}*/

/*int intersectArray(int arr1[],int arr2[],int n,int m){
    unordered_set<int> s1,s2;
    int count=0;
    for(int i=0;i<n;i++){
        s1.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s2.insert(arr2[i]);
    }
    int num=s1.size()>s2.size()?s1.size():s2.size();
    if(s1.size()>s2.size()){
    for(int j=0;j<num;j++){
        if(s2.count(arr1[j]))
            count++;
    }
    }
    else{
        for(int j=0;j<num;j++){
        if(s1.count(arr2[j]))
            count++;
    }
    }
    return count;
}*/

int intersectArray(int arr1[],int arr2[],int n,int m){
    unordered_set s(arr1,arr1+n);
    int res=0;
    for(int i=0;i<n;i++){
        if(s.find(arr2[i])!=s.end()){
            res++;
            s.erase(arr2[i]);
        }
    }
    return res;
}

int main(){
    int n,m;
    cout<<"Enter the size of array1: ";
    cin>>n;
    cout<<"Enter the size of array2: ";
    cin>>m;
    int arr1[n];
    int arr2[m];
    cout<<"Enter array1 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter array2 elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<intersectArray(arr1,arr2,n,m);    
}