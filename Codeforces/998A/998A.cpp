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
    int n,i,a,c=0,mn=1001,mni=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<mn)
        {
            mn=a;
            mni=i;
        }
        c+=a;
    }
    if(c-mn && c-mn!=mn)
        cout<<"1\n"<<mni;
    else
        cout<<"-1\n";
    return 0;
}
