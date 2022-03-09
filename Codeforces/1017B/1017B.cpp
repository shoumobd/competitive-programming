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
    int n,i;
    LL z1=0,z2=0,o1=0,o2=0,c1,c2;
    string s1,s2;
    cin>>n>>s1>>s2;
    for(i=0;i<n;i++)
    {
        if(s1[i]=='0')
        {
            z1++;
            if(s2[i]=='0') z2++;
        }
        else
        {
            o1++;
            if(s2[i]=='1') o2++;
        }
    }
    c1=z2*o1;
    c2=(z2-z1)*(o2-o1);
    cout<<c1+c2;
    return 0;
}
