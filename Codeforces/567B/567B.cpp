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
    int n,i,r,c=0,cm=0;
    char ch;
    map <int, int> mp;
    deque < pair<char, int> > q;
    deque < pair<char, int> > :: iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ch>>r;
        q.push_back(make_pair(ch,r));
        if(ch=='+')
        {
            mp[r]=1;
        }
        else
        {
            if(!mp[r])
            {
                q.push_front(make_pair('+',r));
            }
            mp[r]=0;
        }
    }
    for(it=q.begin();it!=q.end();it++)
    {
        //cout<<it->first<<" "<<it->second<<"\n";
        if(it->first=='+') c++;
        else c--;
        cm=max(c,cm);
    }
    cout<<cm;
    return 0;
}
