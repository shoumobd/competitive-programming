#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a2=0,a5=0,a1=0,x,f=1;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x==25)
        {
            a2++;
        }
        else if(x==50)
        {
            if(a2>0)
            {
                a5++;
                a2--;
            }
            else
            {
                f=0;
            }
        }
        else
        {
            if(a5>0 && a2>0)
            {
                a5--;
                a2--;
                a1++;
            }
            else if(a2>2)
            {
                a2-=3;
                a1++;
            }
            else
            {
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
