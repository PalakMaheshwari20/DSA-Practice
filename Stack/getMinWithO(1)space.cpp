#include<bits/stdc++.h>
using namespace std;

struct myStack{
    int minEle;
    stack<int> st;

    void push(int x){
        if(st.size()==0){
            st.push(x);
            minEle=x;
        }
        else{
            if(minEle<=x)
                st.push(x);
            else if(minEle>x)
                {
                    st.push(2*x-minEle);
                    minEle=x;
                }
        }
    }

    int pop(){
        if(st.size()==0)
            return -1;
        else{
            if(st.top()>=minEle)
                st.pop();
            else if(st.top()<minEle)
            {
                minEle=2*minEle-st.top();
                st.pop();
            }
        }
        return -1;
    }
    int getMin(){
        if(st.size()==0)
            return -1;
        return minEle;
    }
    int top(){
        if(st.size()==0)
            return -1;
        else{
            if(st.top()>minEle)
                return st.top();
            else if(st.top()<minEle)
                return minEle;
        }
    }
};

int main(){
   myStack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop(); 
cout<<"Ans: "<<s.getMin();
}