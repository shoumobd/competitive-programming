#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i=5,a,j;
    string s,s1;
    vector <int> v;
    map <int, string> mp;
    map <int, string> :: iterator it;
    mp[0]="S";
    mp[1]="M";
    mp[2]="L";
    mp[3]="XL";
    mp[4]="XXL";
    while(i--)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>a;
    while(a--)
    {
        cin>>s;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==s)
            {
                i=it->first;
                break;
            }
        }
        for(j=0;j<5;j++)
        {
            if(i+j<5 && v[i+j]>0)
            {
                v[i+j]--;
                s1=mp[i+j];
                break;
            }
            if(i-j>=0 && v[i-j]>0)
            {
                v[i-j]--;
                s1=mp[i-j];
                break;
            }
        }
        cout<<s1<<"\n";
    }
    return 0;
}
