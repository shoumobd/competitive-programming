#include <bits/stdc++.h>

using namespace std;

int luc(int n)
{
	int x=0;
	while(n)
	{
		if(n%10==4 || n%10==7) x++;
		n/=10;
	}
	return x;
}

int main()
{
	int n,k,a,c=0;
	cin>>n>>k;
	while(n--)
	{
		cin>>a;
		if(luc(a)<=k) c++;
	}
	cout<<c;
	return 0;
}
