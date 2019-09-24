#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<fixed<<setprecision(10);
    double x1,y1,x2,y2,ax1,ay1,ax2,ay2,x,y;
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        x=x1+x2; x/=2.0;
        y=y1+y2; y/=2.0;
        ax1=x+y1-y;
        ay1=y-x1+x;
        ax2=x-y1+y;
        ay2=y+x1-x;
        cout<<ax1<<" "<<ay1<<" "<<ax2<<" "<<ay2<<"\n";
    }
    return 0;
}
