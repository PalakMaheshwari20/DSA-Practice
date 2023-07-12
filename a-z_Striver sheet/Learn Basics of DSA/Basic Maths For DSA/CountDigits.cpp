#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
	int x=n;
	int count=0;
	while(x>0)	
	{
		x/=10;
		count++;
	}
	return count;
}

int main()
{
    int n;
	cin>>n;
	cout<<countDigits(n);
}