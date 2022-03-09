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
	int n,f=0,i;
	string s;
	cin>>n>>s;
	for(i=0;i<n-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			f=1;
			cout<<"YES\n"<<s[i]<<s[i+1];
			break;
		}
	}
	if(!f) cout<<"NO";
	return 0;
}
