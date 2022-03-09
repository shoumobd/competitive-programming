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
    int sh,sm,th,tm;
    char c;
    scanf("%d%c%d",&sh,&c,&sm);
    scanf("%d%c%d",&th,&c,&tm);
    sm-=tm;
    if(sm<0)
    {
        sm+=60;
        sh--;
    }
    sh-=th;
    if(sh<0) sh+=24;
    if(sh<10) cout<<"0";
    cout<<sh<<":";
    if(sm<10) cout<<"0";
    cout<<sm<<"\n";
    return 0;
}
