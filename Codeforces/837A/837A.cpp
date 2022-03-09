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
	LL n,i,mx=0,c=0;
	string s;
	cin>>n;
	getline(cin,s);
	getline(cin,s);
	//cout<<s<<"\n";
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			c=0;
		}
		else if(s[i]<='Z')
		{
			c++;
		}
		mx=max(mx,c);
		//cout<<s[i]<<" "<<mx<<" \n";
	}
	cout<<mx;
	return 0;
}
