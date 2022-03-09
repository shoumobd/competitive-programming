#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c,i,j,x=0;
    string s;
    vector <string> v;
    map <int, int> mr,mc;
    cin>>r>>c;
    for(i=0; i<r; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(v[i][j]=='S')
            {
                mr[i]++;
                mc[j]++;
                //printf("Here, i=%d, j=%d, mri=%d, mcj=%d, vij=%c\n",i,j,mr[i],mc[j],v[i][j]);
            }
        }
    }
    for(i=0; i<r; i++)
    {
        //cout<<"rrHere, i="<<i<<", mri="<<mr[i]<<"\n";
        if(mr[i]<1)
        {
            for(j=0; j<c; j++)
            {
                v[i][j]='E';
            }
        }
    }
    for(i=0; i<c; i++)
    {
        //cout<<"ccHere, i="<<i<<", mci="<<mc[i]<<"\n";
        if(mc[i]<1)
        {
            for(j=0; j<r; j++)
            {
                v[j][i]='E';
            }
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(v[i][j]=='E')
            {
                x++;
            }
        }
    }
    cout<<x;
    return 0;
}
