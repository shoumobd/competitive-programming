#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m,i,j,k,ti=0;
    string s,s1,s2;
    map <string,int> mp;
    map <string,int> :: iterator it;
    vector < pair<int,int> > in;
    vector <int> v[101];
    while(scanf("%d",&n)!=EOF)
    {
        mp.clear();
        in.clear();
        memset(v,0,sizeof(v));
        for(i=0; i<n; i++)
        {
            cin>>s;
            mp[s]=i;
            in.push_back(make_pair(i,0));
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>s1>>s2;
            v[mp[s1]].push_back(mp[s2]);
            in[mp[s2]].second++;
            /*for(j=0;j<v[i].size();j++)
            {
                in[v[i][j]].second++;
            }*/
        }
        cout<<"Case #"<<++ti<<": Dilbert should drink beverages in this order:";
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                //printf("Here, i=%d, j=%d, inj=%d\n",i,j,in[j].second);
                if(in[j].second==0)
                {
                    in[j].second--;
                    for(k=0; k<v[j].size(); k++)
                    {
                        in[v[j][k]].second--;
                    }
                    for(it=mp.begin();it!=mp.end();it++)
                    {
                        if(it->second==in[j].first)
                        {
                            cout<<" "<<it->first;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        cout<<".\n\n";
    }
    return 0;
}
