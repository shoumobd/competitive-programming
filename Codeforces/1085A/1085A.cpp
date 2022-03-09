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
    string s="",t; int i,j;
    cin>>t;
    i=0; j=t.size()-1;
    while(i<j)
    {
        if((t.size())%2) {s+=t[i]; s+=t[j];}
        else {s+=t[j]; s+=t[i];}
        i++; j--;
        //cout<<i<<" "<<j<<" "<<s<<"\n";
    }
    if(i==j) s+=t[i];
    reverse(s.begin(),s.end()); cout<<s;
    return 0;
}
