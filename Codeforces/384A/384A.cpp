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
    int n,i,j,c=0;
    string s;
    vector <string> v;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s="";
        for(j=1; j<=n; j++)
        {
            if(i%2==j%2)
            {
                s+='C';
                c++;
            }
            else
                s+='.';
        }
        v.push_back(s);
    }
    cout<<c;
    for(i=0; i<v.size(); i++)
        cout<<"\n"<<v[i];
    return 0;
}
