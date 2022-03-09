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
    LL a,c=0,c1=0,c2=0,c3=0,c4=0,f=1;
    int i,j,n,zi,zj;
    cin>>n;
    vector <LL> v[n+1];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a;
            v[i].push_back(a);
            if(!a)
            {
                zi=i;
                zj=j;
            }
        }
    }
    //cout<<"Here, zi="<<zi<<", zj="<<zj<<"\n";
    if(n==1)
        cout<<"1";
    else
    {
        if(!zi)
            i=1;
        else
            i=0;
        for(j=0; j<n; j++)
        {
            c+=v[i][j];
            c1+=v[zi][j];
        }
        v[zi][zj]=c-c1;
        if(v[zi][zj]<1 || v[zi][zj]>1000000000000000000)
        {
            f=0;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                c1=0;
                c2=0;
                c3=0;
                c4=0;
                for(j=0; j<n; j++)
                {
                    c1+=v[i][j];
                    c2+=v[j][i];
                    c3+=v[j][j];
                    c4+=v[j][n-j-1];
                }
                if(c1!=c || c2!=c || c3!=c || c4!=c)
                {
                    f=0;
                    break;
                }
            }
        }
        if(f)
            cout<<v[zi][zj];
        else
            cout<<"-1";
    }
    return 0;
}
