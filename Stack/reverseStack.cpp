#include<bits/stdc++.h>
using namespace std;

//TC: O(N^2) SC: O(N^2)
void insertAtBottom(stack<int> &st, int ele){
    //base case
    if(st.empty())
    {
        st.push(ele);
        return;
    }

    int num=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(num);
}

void reverse(stack<int> &st){
    //base case
    if(st.empty())
        return;
    int num=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,num);
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
    reverse(st);
    for(int i=st.size()-1;i>=0;i--){
        cout<<st.top()<<" "; 
        st.pop();
    }
}