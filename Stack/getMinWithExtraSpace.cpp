#include<bits/stdc++.h>
using namespace std;

struct myStack{
    stack<int> s1;
    stack<int> tmp;

    void push(int x){
        s1.push(x);
        if(tmp.size()==0 || tmp.top()>=x)
            tmp.push(x);
        return;
    }

    int pop(){
        if(s1.size()==0)
            return -1;
        int ans=s1.top();
        s1.pop();
        if(tmp.top()==ans)
        tmp.pop();
        return ans;
    }
    int getMin(){
        if(tmp.size()==0)
            return -1;
        return tmp.top();
    }
};

int main(){
   myStack s;
   s.push(4);
   s.pop();
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
 
cout<<"Ans: "<<s.getMin();
}