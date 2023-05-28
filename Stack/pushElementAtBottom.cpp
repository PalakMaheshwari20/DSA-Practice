#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st, int x){
    //base case
    if(st.empty()){
        st.push(x);
        return;
    }

    int num=st.top();
    st.pop();
    //recursive call
    solve(st,x);
    st.push(num);
}

int main(){
    int x;
    cout<<"Enter element to be inserted: ";
    cin>>x;
   stack<int> st;
    st.push(4);
    st.push(5);
    st.push(8);
    st.push(1);
    st.pop();
    solve(st,x);
    for(int i=st.size()-1;i>=0;i--){
        cout<<st.top()<<" "; 
        st.pop();
    }
}