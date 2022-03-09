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
	LL n,i,c=1;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(i>1) cout<<" ";
		c+=i; c%=n;
		if(!c) cout<<n; else cout<<c;
	}
	return 0;
}
