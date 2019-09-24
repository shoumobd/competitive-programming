#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t=0,c,i,j,a[101][101];
    string s1,s2;
    /*ifstream fi;
    ofstream fo;
    fi.open("in.txt");
    fo.open("out.txt");*/
    while(1)
    {
        c=0;
        getline(cin,s1);
        if(s1=="#") break;
        getline(cin,s2);
        for(i=0;i<=s1.size();i++)
        {
            for(j=0;j<=s2.size();j++)
            {
                if(!i || !j) a[i][j]=0;
                else if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
                else a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
        c=a[s1.size()][s2.size()];
        cout<<"Case #"<<++t<<": you can visit at most "<<c<<" cities.\n";
        //fo<<"Case #"<<t<<": you can visit at most "<<c<<" cities.\n";
        //printf("Case %d: you can visit at most %d cities.\n",t++,c);
    }
    return 0;
}
