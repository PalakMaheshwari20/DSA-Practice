#include <bits/stdc++.h>
using namespace std;

void printDivisors(int x) 
{
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        cout<<i<<" ";
    }
}

int main() {
	int n;
	cin>>n;
	printDivisors(n);
}
