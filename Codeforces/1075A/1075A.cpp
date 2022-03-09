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
	LL n,x,y,c1,c2;
	cin>>n>>x>>y;
	c1=max(x,y)-1; c2=n-min(x,y);
	//cout<<c1<<" "<<c2<<"\n";
	if(c1<=c2) cout<<"White";
	else cout<<"Black";
	return 0;
}
