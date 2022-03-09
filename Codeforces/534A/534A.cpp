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
    int n,i,i1,i2;
    cin>>n;
    if(n<3) cout<<1<<"\n"<<1;
    else if(n==3) cout<<2<<"\n"<<1<<" "<<3;
    else
    {
        cout<<n<<"\n";
        i1=n-1;
        i2=n;
        //if(n%2) swap i1,i2;
        for(i=i1;i>0;i-=2)
        {
            if(i<i1) cout<<" ";
            cout<<i;
        }
        for(i=i2;i>0;i-=2)
        {
            cout<<" "<<i;
        }
    }
    return 0;
}
