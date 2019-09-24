#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double x1,x2,x3,x4,y1,y2,y3,y4,ma,ca,mb,cb,x,y;
    cin>>n;
    cout<<"INTERSECTING LINES OUTPUT\n";
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if(x1==x2 || x3==x4)
        {
            if(x1==x2 && x3==x4)
            {
                if(x1==x3)
                {
                    cout<<"LINE\n";
                }
                else
                {
                    cout<<"NONE\n";
                }
            }
            else if(x1!=x2)
            {
                ma=(y2-y1)/(x2-x1);
                ca=y1-ma*x1;
                x=x3;
                y=ma*x+ca;
                cout<<"POINT "<<fixed<<setprecision(2)<<x<<" "<<y<<"\n";
            }
            else
            {
                mb=(y4-y3)/(x4-x3);
                cb=y3-mb*x3;
                x=x1;
                y=mb*x+cb;
                cout<<"POINT "<<fixed<<setprecision(2)<<x<<" "<<y<<"\n";
            }
        }
        else
        {
            ma=(y2-y1)/(x2-x1);
            ca=y1-ma*x1;
            mb=(y4-y3)/(x4-x3);
            cb=y3-mb*x3;
            if(ma==mb && ca==cb)
            {
                cout<<"LINE\n";
            }
            else if(ma==mb)
            {
                cout<<"NONE\n";
            }
            else
            {
                x=(cb-ca)/(ma-mb);
                y=ma*x+ca;
                cout<<"POINT "<<fixed<<setprecision(2)<<x<<" "<<y<<"\n";
            }
        }
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}
