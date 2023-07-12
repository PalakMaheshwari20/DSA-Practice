#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //character hashing: for lower case only therefore only 26 places are required 0.25
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;   //if it was for upper case we would use s[i]-'A'
    }


    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}