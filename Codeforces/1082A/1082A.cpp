#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t,n,x,y,d,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>d;
        //cout<<(abs(y-x))%d<<" LOL\n";
        if(!((abs(y-x))%d))
            cout<<(abs(y-x))/d;
        else
        {
            if(!((y-1)%d))
            {
                c1=1+((x-1)-1)/d;
                c1+=(y-1)/d;
            }
            else
            {
                c1=LLONG_MAX;
            }
            if(!((n-y)%d))
            {
                c2=1+((n-x)-1)/d;
                c2+=(n-y)/d;
            }
            else
            {
                c2=LLONG_MAX;
            }
            if(min(c1,c2)<LLONG_MAX)
                cout<<min(c1,c2);
            else
                cout<<-1;
        }
        cout<<"\n";
        //cout<<c1<<" "<<c2<<"\n";
    }
    return 0;
}
