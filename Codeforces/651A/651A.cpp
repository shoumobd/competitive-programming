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
    int a1,a2,c=0;
    cin>>a1>>a2;
    while(a1>0 && a2>0)
    {
        if(a1==1 && a2==1)
            break;
        c++;
        if(a1>a2)
        {
            a1-=2;
            a2++;
        }
        else
        {
            a2-=2;
            a1++;
        }
    }
    cout<<c;
    return 0;
}
