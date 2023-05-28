#include<bits/stdc++.h>
using namespace std;

//TC: O(N) SC: O(N)
void solve(stack<int> &st,int count){
    //base case
    if(count == st.size()/2){
        st.pop();
        return;
    }

    int num=st.top();
    st.pop();
    //recursive call
    solve(st,count+1);
    st.push(num);
}

int main(){
    int count=0;
   stack<int> st;
    st.push(4);
    st.push(5);
    st.push(8);
    st.push(10);
    st.push(1);
    st.pop();
    solve(st,count);
    for(int i=st.size()-1;i>=0;i--){
        cout<<st.top()<<" "; 
        st.pop();
    }
}