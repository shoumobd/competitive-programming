#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define PI 2*acos(0.0)

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a,b;
    cin>>n;
    for(i=sqrt(n);i>0;i--)
    {
        if(!(n%i))
        {
            a=i;
            break;
        }
    }
    b=n/a; if(a>b) swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
