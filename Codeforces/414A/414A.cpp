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
    int n,k,i,j=1;
    cin>>n>>k;
    if(k<n/2)
        cout<<"-1";
    else
    {
        if(n==1)
        {
            if(!k)
                cout<<"1";
            else
                cout<<"-1";
        }
        else
        {
            for(i=0; i<n/2-1; i++)
            {
                while(j==k-n/2+1 || j==k-n/2 || j==2*(k-n/2+1) || j==2*(k-n/2+1)-1)
                {
                    j++;
                }
                cout<<j<<" "<<j+1<<" ";
                j+=2;
            }
            cout<<k-n/2+1<<" "<<2*(k-n/2+1);
            if(n%2)
            {
                while(j==k-n/2+1 || j==2*(k-n/2+1))
                {
                    j++;
                }
                cout<<" "<<j<<" ";
            }
        }
    }
    return 0;
}
