#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //number hashing for eg: for 15 elements
    int hash[16]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    //pre-computing using map ------->Approach using map
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    //iterating in the map
    for(auto it: mpp)
    {
        //it.first -> to fetch key and it.second -> to fetch value
        cout<<it.first<<" -> "<<it.second<<endl;
    }


    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        //cout<<hash[num]<<endl;  //in case when we are using array for hashing
        cout<<mpp[num]<<endl;   //in case when we are using map

    }
}