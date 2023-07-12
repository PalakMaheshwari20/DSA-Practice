#include <bits/stdc++.h>
using namespace std;

bool countprime(int x) {
	int count=0;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0){
			count++;
		}
    }
	if(count>1)	return false;
	else return true;
}

int main() {
	int n;
	cin>>n;
	if(countprime(n)==1)
		cout<<"true";
	else cout<<"false";
}
