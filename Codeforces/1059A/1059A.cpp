#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LL n,L,a,t,l,c=0,t1,l1;
	cin>>n>>L>>a;
	if(n)
	{
		cin>>t>>l; c+=t/a;
	}
	else
	{
		n++; t=0; l=0;
	}
	while(--n)
	{
		t1=t; l1=l;
		cin>>t>>l;
		c+=((t-t1-l1)/a);
	}
	c+=((L-t-l)/a);
	cout<<c;
	return 0;
}
