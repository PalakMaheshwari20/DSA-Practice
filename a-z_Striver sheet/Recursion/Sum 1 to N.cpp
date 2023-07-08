#include <bits/stdc++.h>
using namespace std;

int printNos(int N)
    {
        if(N==0)
            return 0;
        return N+printNos(N-1);
    }

int main()
{
    int n;
    cin>>n;
    cout<<printNos(n);
}
