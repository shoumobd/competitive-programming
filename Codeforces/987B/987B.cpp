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
    int x,y;
    cin>>x>>y;
    if(x==y) cout<<"=";
    else
    {
        if(x>2 && y>2)
        {
            if(x<y) cout<<">"; else cout<<"<";
        }
        else if(x==1) cout<<"<";
        else if(y==1) cout<<">";
        else if(x==2)
        {
            if(y==4) cout<<"=";
            else if(y<4) cout<<"<";
            else cout<<">";
        }
        else if(y==2)
        {
            if(x==4) cout<<"=";
            else if(x<4) cout<<">";
            else cout<<"<";
        }
    }
    return 0;
}
