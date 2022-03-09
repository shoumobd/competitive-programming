#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,t1,s2,t2;
    int n;
    cin>>s1>>s2>>n  ;
    cout<<s1<<" "<<s2<<"\n";
    while(n--)
    {
        cin>>t1>>t2;
        if(t1==s1)
            s1=t2;
        else
            s2=t2;
        cout<<s1<<" "<<s2<<"\n";
    }
    return 0;
}
