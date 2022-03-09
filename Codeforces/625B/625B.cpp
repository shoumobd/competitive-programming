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
    string s,s1;
    int c=0;
    cin>>s>>s1;
    size_t f=s.find(s1);
    while(f!=string::npos)
    {
        c++;
        f=s.find(s1,f+s1.size());
        //cout<<f<<"\n";
    }
    cout<<c;
    return 0;
}
