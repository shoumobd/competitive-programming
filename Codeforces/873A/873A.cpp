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
	int n,c=0,k,x,a,i;
	cin>>n>>k>>x;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(i<n-k) c+=a; else c+=x;
	}
	cout<<c;
	return 0;
}
