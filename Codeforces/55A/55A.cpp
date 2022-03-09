#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    //vector <int> v(1002);
    cin>>n;
    if(!(n &(n-1))) cout<<"YES";
    else cout<<"NO";
    /*for(i=1; i<1002; i++)
    {
        if(!(i & (i-1))) continue; //power of two
        fill(v.begin(),v.end(),0);
        int x=0;
        for(int k=1; k<1000; k++)
        {
            int c=0;
            for(;; x++)
            {
                c++;
                if(x>=i)
                    x=0;
                if(c==k)
                {
                    v[x]=1;
                    //cout<<x<<"here\n";
                    break;
                }
            }
        }
        cout<<"here, i="<<i<<'\n';
            for(int j=0; j<i; j++)
            {
                cout<<v[j];
            }
            cout<<'\n';
    }*/
    return 0;
}
