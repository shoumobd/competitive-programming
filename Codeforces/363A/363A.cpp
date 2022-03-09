#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n,s="";
    int i,c,j;
    cin>>n;
    for(i=n.size()-1;i>=0;i--)
    {
        s="";
        c=n[i]-'0';
        //cout<<c<<"\n";
        if(c<5) s+="O-|";
        else{ s+="-O|"; c-=5; }
        for(j=1;j<=c;j++) s+='O'; s+='-';
        for(j=c;j<4;j++) s+='O';
        cout<<s<<"\n";
    }
    return 0;
}
