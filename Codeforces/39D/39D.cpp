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
    int i,c=0; bool a; vector <bool> v1,v2;
    for(i=0;i<3;i++){ cin>>a; v1.push_back(a); }
    for(i=0;i<3;i++){ cin>>a; v2.push_back(a); }
    for(i=0;i<3;i++){ c+=(v1[i]^v2[i]); }
    if(c==3) cout<<"NO"; else cout<<"YES";
    return 0;
}
