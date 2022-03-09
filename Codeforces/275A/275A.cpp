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
    int x,i,j,i1,j1;
    bool b[4][4];
    memset(b,1,sizeof(b));
    vector <int> a[4];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>x;
            if(x%2)
            {
                b[i][j]=!b[i][j];
                if(i-1>=0)
                    b[i-1][j]=!b[i-1][j];
                if(i+1<3)
                    b[i+1][j]=!b[i+1][j];
                if(j-1>=0)
                    b[i][j-1]=!b[i][j-1];
                if(j+1<3)
                    b[i][j+1]=!b[i][j+1];
            }
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<b[i][j];
        cout<<"\n";
    }
    return 0;
}
