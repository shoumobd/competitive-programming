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
    int n,i;
    string s;
    map <char, int> mp;
    cin>>n>>s;
    for(i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    int mx=max(mp['A'],max(mp['C'],max(mp['G'],mp['T'])));
    int c=mx-mp['A']+mx-mp['C']+mx-mp['G']+mx-mp['T'];
    //cout<<c<<"\n";
    if(c>mp['?'] || ((mp['?']-c)%4))
        cout<<"===";
    else
    {
        //cout<<mx<<"\n";
        mx+=((mp['?']-c)/4); //cout<<mx<<"\n";
        char ch[]= {'A','C','G','T'};
        int j=0;
        for(i=0; i<n; i++)
        {
            while(mp[ch[j]]>=mx)
                j++;
            if(s[i]=='?')
            {
                //cout<<s[i]<<" "<<j<<" "<<ch[j]<<"\n";
                s[i]=ch[j];
                mp[ch[j]]++;
            }
        }
        cout<<s;
    }
    return 0;
}
