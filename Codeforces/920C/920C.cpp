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
    int n,i,a;
    string s,f="YES";
    vector <int> v,mx;
    cin>>n;
    while(n--)
    {
        cin>>a;
        v.push_back(a);
        if(mx.empty())
            mx.push_back(a);
        else
            mx.push_back(max(mx[mx.size()-1],a));
    }
    cin>>s;
    //sort(v.begin(),v.end(),so);
    for(i=0; i<mx.size(); i++)
    {
        //cout<<mx[i]<<" ";
        if(s[i]=='0' && mx[i]>i+1) f="NO";
    }
    cout<<f;
    return 0;
}
