#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,j,i1;
    string s1,s2,s;
    map <string, int> mp;
    map <string, int> :: iterator i;
    cin>>n;
    for(i1=0;i1<n;i1++)
    {
        if(i1) cin>>s1;
        cin>>s1>>s2;
        s=s1+s2;
        //sort(s.begin(),s.end());
        int f=0;
        for(j=0; j<4; j++)
        {
            if(mp[s]>0)
            {
                //cout<<"here, "<<s<<" "<<mp[s]<<"\n";
                f=1;
                mp[s]++;
                break;
            }
            /*s.insert(s.end(),s[0]);
            s.erase(0,1);*/
            swap(s[1],s[0]);
            swap(s[1],s[2]);
            swap(s[1],s[3]);
            //cout<<"here, "<<s<<" "<<mp[s]<<"\n";
        }
        if(!f)
        {
            //cout<<"not here, "<<s<<" "<<mp[s]<<"\n";
            mp[s]++;
        }
    }
    for(i=mp.begin(); i!=mp.end(); i++)
        if(i->second>0)
        {
            c++;
            //cout<<i->first<<" "<<i->second<<"\n";
        }
    cout<<c<<"\n";
    return 0;
}
