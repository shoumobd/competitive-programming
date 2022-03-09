#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool pal(string s)
{
    if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin()))
    {
        //cout<<"Yeah "<<s<<"\n";
        return 1;
    }
    //cout<<"Nah "<<s<<"\n";
    return 0;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int c=0;
    cin>>s;
    s.erase(2,1);
    while(++c)
    {
        if(pal(s))
            break;
        s[3]++;
        if(s[3]>'9')
        {
            s[3]='0';
            s[2]++;
            if(s[2]>'5')
            {
                s[2]='0';
                s[1]++;
                if(s[1]>'9')
                {
                    s[1]='0';
                    s[0]++;
                }
                else if(s[1]=='4' && s[0]=='2')
                {
                    s[1]='0';
                    s[0]='0';
                }
            }
        }
    }
    cout<<--c;//<<" "<<s;
    return 0;
}
