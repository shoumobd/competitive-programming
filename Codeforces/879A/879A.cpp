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
	LL n,i,s,d,c,c1,d1,c2,x;
	cin>>n>>c1>>d1;
	for(i=1;i<n;i++)
	{
		cin>>s>>d;
		if(c1>=s)
		{
			x=c1-s;
			s+=d*(1+(x/d));

		}
		c1=s;
	}
	cout<<c1;
	return 0;
}
