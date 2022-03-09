#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll l,k,c=0;
	cin>>k>>l;
	while (!(l%k))
	{
		l/=k;
		c++;
	}
	if(c && l==1) cout<<"YES\n"<<c-1;
	else cout<<"NO";
	return 0;
}
