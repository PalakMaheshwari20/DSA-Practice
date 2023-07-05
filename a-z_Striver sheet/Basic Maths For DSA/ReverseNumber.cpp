#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
	int ans=0;
	while(n>0)
	{
		int a=n%10;
		ans=10*ans+a;
		n=n/10;
	}
	return ans;
}

int main() {
	int n;
	cin>>n;
	cout<<reverse(n);
	
}
