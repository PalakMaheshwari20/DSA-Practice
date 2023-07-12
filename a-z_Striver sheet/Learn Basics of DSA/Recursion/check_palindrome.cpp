#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(int i, string &s)
    {
        if(i>=s.length()/2)
            return true;
        if(s[i]!=s[s.length()-i-1])
            return false;
        checkpalindrome(i+1,s);
    }

int main()
{
    string s="ABACGCABA";
    if(checkpalindrome(0,s)>0)
        cout<<"True";
    else cout<<"False";
}
