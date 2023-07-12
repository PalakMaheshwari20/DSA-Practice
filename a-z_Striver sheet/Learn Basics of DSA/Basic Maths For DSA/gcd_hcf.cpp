#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	//APPROACH 1 
	for(int i=min(a,b);i>=1;i--)
	{
	 	if(a%i==0 && b%i==0)
	 		return i;
	}
	return 1;


	//APPROACH 2: EUCLIDEAN METHOD
	while(a>0 && b>0)
	{
		if(a>b)
			a=a%b;
		else
			b=b%a;
	}
	if(a==0)	return b;
	else return a;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD/HCF of a and b is "<<gcd(a,b);
    return 0;
}
