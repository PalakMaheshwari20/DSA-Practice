#include<bits/stdc++.h>
using namespace std;

bool validParenthesis(string s){
    if(s.size()%2!=0)
        return false;
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
        else{
            if(st.empty())
                return false;
            char c=st.top();
            st.pop();
            if((s[i]==')'&& c=='(')||(s[i]=='}'&& c=='{')||(s[i]==']'&& c=='['))
                continue;
            else return false;
        }
    }
    if(st.empty())
        return true;
    return false;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    if(validParenthesis(s))
        cout<<"Balanced";
    else
        cout<<"Not balanced";
}