#include <bits/stdc++.h>
using namespace std;

int fact(int N)
    {
        if(N==1)
            return 1;
        return N*fact(N-1);
    }

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
