#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x1a,x2a,x1b,x2b,y1a,y2a,y1b,y2b,x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1a,&y1a,&x2a,&y2a,&x1b,&y1b,&x2b,&y2b)!=EOF)
    {
        if(x1a==x1b && y1a==y1b)
        {
            swap(x1a,x2a);
            swap(y1a,y2a);
        }
        else if(x2a==x2b && y2a==y2b)
        {
            swap(x1b,x2b);
            swap(y1b,y2b);
        }
        else if(x1a==x2b && y1a==y2b)
        {
            swap(x1a,x2a);
            swap(y1a,y2a);
            swap(x1b,x2b);
            swap(y1b,y2b);
        }
        x=x1a+x2b-x2a;
        y=y1a+y2b-y2a;
        cout<<fixed<<setprecision(3)<<x<<" "<<y<<"\n";
    }
    return 0;
}
