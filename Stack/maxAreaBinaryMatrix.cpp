#include<bits/stdc++.h>
using namespace std;

//TC: O(N) SC: O(N)
int maxAreaHistogram(vector<int> &arr){
    int n=arr.size();
    stack<pair<int,int>> s1,s2;
    vector<int> left,right;
    int pseudo_index=-1;
    int pseudo_index1=n;
    for(int i=0;i<n;i++){
        if(s1.empty())
            left.push_back(pseudo_index);
        else if(s1.size()>0 && s1.top().first<arr[i])
            left.push_back(s1.top().second);
        else{
            while(s1.size()>0 && s1.top().first>arr[i]){
                s1.pop();
            }
            if(s1.empty())
                left.push_back(pseudo_index);
            else
                left.push_back(s1.top().second);
        }
        s1.push({arr[i],i});
    }

    for(int i=n-1;i>=0;i--){
        if(s2.size()==0)
            right.push_back(pseudo_index1);
        else if(s2.size()>0 && s2.top().first<arr[i])
            right.push_back(s2.top().second);
        else{
            while(s2.size()>0 && s2.top().first>=arr[i])
                s2.pop();
            if(s2.size()==0)
                right.push_back(pseudo_index1);
            else
                right.push_back(s2.top().second);
        }
        s2.push({arr[i],i});
    }
    reverse(right.begin(),right.end()); 
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        res=max(res,(right[i]-left[i]-1)*arr[i]);
    }
    return res;
}

int maxAreaBinaryMatrix(vector<vector<int>> arr){
    int m = arr.size();
    if(m==0)
       return 0;
    int n=arr[0].size();
    int res=0;
    vector<int> v;
    for(int j=0;j<m;j++)
        v.push_back(arr[0][j]);
    res=maxAreaHistogram(v);
    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='0')
                v[j]=0;
            else
                v[j]+=arr[i][j]; 
        }
        res=max(res,maxAreaHistogram(v));
    }
    return res;
}

int main(){
  /* int n,m;
    cout<<"Enter the size of 2D array: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }*/
    vector<vector<int>> vect {{0,1,1,0}, {1,1,1,1}, {1,0,1,1}, {1,0,1,1}};
    cout<<"Ans: "<<maxAreaBinaryMatrix(vect);
}