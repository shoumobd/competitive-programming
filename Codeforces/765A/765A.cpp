#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1,s2,h;
    int n;
    map <string, int> mp1,mp2;
    cin>>n>>h;
    while(n--)
    {
        cin>>s; s1=s; s2=s;
        s1.erase(s1.begin()+3,s1.end());
        s2.erase(s2.begin(),s2.end()-3);
        //cout<<s1<<" "<<s2<<"\n";
        mp1[s1]++; mp2[s2]++;
    }
    if(mp1[h]<=mp2[h]) cout<<"home\n";
    else cout<<"contest\n";
    return 0;
}
