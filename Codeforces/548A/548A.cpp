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
    int k,i,j,f=1;
    string s;
    cin>>s>>k;
    if(s.size()%k)
        f=0;
    else
    {
        int l=s.size()/k;
        for(i=0; i<k; i++)
        {
            for(j=0; j<l/2; j++)
            {
                if(s[j+i*l]!=s[(i+1)*l-j-1])
                    f=0;
            }
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
