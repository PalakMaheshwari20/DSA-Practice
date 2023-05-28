#include<bits/stdc++.h>
using namespace std;

//TC: O(N^2) SC: O(N^2)
void sortedInsert(stack<int> &s,int ele){
    if((s.empty())||(!(s.empty())&& s.top()<ele)){
        s.push(ele);
        return;
    }

    int n=s.top();
    s.pop();
    sortedInsert(s,ele);
    s.push(n);
}

void sortStack(stack<int> &st){
    //base case
    if(st.empty())
        return;
    int num=st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st,num);
}

int main(){
    int count=0;
   stack<int> st;
    st.push(4);
    st.push(-1);
    st.push(8);
    st.push(10);
    st.push(1);
    st.pop();
    sortStack(st);
    for(int i=st.size()-1;i>=0;i--){
        cout<<st.top()<<" "; 
        st.pop();
    }
}