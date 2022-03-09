#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

struct abc
{
    int id,a,b,c,d;
};

bool lol(abc x, abc y)
{
    return((x.a+x.b+x.c+x.d>y.a+y.b+y.c+y.d) || (x.a+x.b+x.c+x.d==y.a+y.b+y.c+y.d && x.id<y.id));
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    cin>>n;
    abc s[n+1];
    for(i=0; i<n; i++)
    {
        cin>>s[i].a>>s[i].b>>s[i].c>>s[i].d;
        s[i].id=i;
    }
    sort(s,s+n,lol);
    for(i=0; i<n; i++)
    {
        if(!s[i].id)
        {
            cout<<i+1<<"\n";
            break;
        }
    }
    return 0;
}
