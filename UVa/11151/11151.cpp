#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*ifstream fi;
    ofstream fo;
    fi.open("in.txt");
    fo.open("out.txt");*/
    int t,c,i,j,d,a[1001][1001];
    string s;
    cin>>t;
    getline(cin,s);
    while(t--)
    {
        c=0;
        getline(cin,s);
        for(i=0;i<s.size();i++) a[i][i]=1;
        for(d=1;d<s.size();d++)
        {
            for(i=0;i<s.size()-d;i++)
            {
                j=i+d;
                if(s[i]==s[j])
                {
                    if(d==1) a[i][j]=2;
                    else a[i][j]=a[i+1][j-1]+2;
                }
                else
                {
                    a[i][j]=max(a[i][j-1],a[i+1][j]);
                }
            }
        }
        if(s.size()) c=a[0][s.size()-1];
        cout<<c<<'\n';
        //fo<<c<<'\n';
    }
    return 0;
}
