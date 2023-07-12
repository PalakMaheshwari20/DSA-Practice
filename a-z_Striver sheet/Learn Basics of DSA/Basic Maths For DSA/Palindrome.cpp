#include <bits/stdc++.h>
using namespace std;

bool palindrome(int x)
{
    int n=x;
    int ans=0;
	while(n>0)
	{
		int a=n%10;
		ans=10*ans+a;
		n=n/10;
	}
	if(x==ans) return true;
    else return false;
}

int main() {
	int n;
	cin>>n;
	cout<<palindrome(n);
	
}
