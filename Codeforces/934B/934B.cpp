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
    int k,i;
    cin>>k;
    if(k>36)
        cout<<"-1";
    else
    {
        for(i=0; i<k/2; i++)
            cout<<"8";
        if(k%2)
            cout<<"4";
    }
    return 0;
}
