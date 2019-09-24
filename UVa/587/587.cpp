#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ti=0,i;
    double x,y,d,c;
    string s;
    cout<<fixed<<setprecision(3);
    while(++ti)
    {
        d=0.0; x=0.0; y=0.0; c=0;
        cin>>s;
        if(s=="END") break;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                c*=10;
                c+=(s[i]-'0');
            }
            else
            {
                if(s[i-1]>='0' && s[i-1]<='9')
                {
                    if(s[i]=='E')
                    {
                        x+=c;
                    }
                    else if(s[i]=='W')
                    {
                        x-=c;
                    }
                    else if(s[i]=='N')
                    {
                        if(s[i+1]=='E')
                        {
                            x+=(c/sqrt(2.0));
                            y+=(c/sqrt(2.0));
                        }
                        else if(s[i+1]=='W')
                        {
                            x-=(c/sqrt(2.0));
                            y+=(c/sqrt(2.0));
                        }
                        else y+=c;
                    }
                    else if(s[i]=='S')
                    {
                        if(s[i+1]=='E')
                        {
                            x+=(c/sqrt(2.0));
                            y-=(c/sqrt(2.0));
                        }
                        else if(s[i+1]=='W')
                        {
                            x-=(c/sqrt(2.0));
                            y-=(c/sqrt(2.0));
                        }
                        else y-=c;
                    }
                }
                c=0;
            }
        }
        d=(x*x)+(y*y); d=sqrt(d);
        cout<<"Map #"<<ti<<"\n";
        cout<<"The treasure is located at ("<<x<<","<<y<<").\n";
        cout<<"The distance to the treasure is "<<d<<".\n\n";
    }
    return 0;
}
