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

void checkArmstrong(int x)
{
	int sum=0;
	int i=countDigits(x);
	int N=x;
	while(N!=0)
    {
        int digit = N%10;
        sum = sum + pow(digit,i);
        N = N/10;
    }
	if(sum==x) cout<<"true";
	else cout<<"false";
}
int main()
{
    int a;
    cin>>a;
    checkArmstrong(a);
    return 0;
}
