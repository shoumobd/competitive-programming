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
    int n,i,j;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i;j++) cout<<"  ";
        for(j=0;j<=i;j++){cout<<j; if(i) cout<<" ";}
        for(j=i-1;j>=0;j--){cout<<j; if(j>0) cout<<" ";}
        cout<<"\n";
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n-i;j++) cout<<"  ";
        for(j=0;j<=i;j++){cout<<j; if(i) cout<<" ";}
        for(j=i-1;j>=0;j--){cout<<j; if(j>0) cout<<" ";}
        cout<<"\n";
    }
    return 0;
}

/*
    0
  0 1 0
0 1 2 1 0
  0 1 0
    0

    0
  0 1 0
0 1 2 1 0
  0 1 0
    0



      0
    0 1 0
  0 1 2 1 0
0 1 2 3 2 1 0
  0 1 2 1 0
    0 1 0
      0

*/
