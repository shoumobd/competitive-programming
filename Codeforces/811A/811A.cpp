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
    LL a,b,i,f;
    cin>>a>>b;
    for(i=1;;i++)
    {
        if(i%2)
        {
            a-=i;
            if(a<0)
            {
                f=1;
                break;
            }
        }
        else
        {
            b-=i;
            if(b<0)
            {
                f=2;
                break;
            }
        }
    }
    if(f==1) cout<<"Vladik\n"; else cout<<"Valera\n";
    return 0;
}
