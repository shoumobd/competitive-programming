#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,i1,i,j,f=1;
    vector <int> v(30);
    string s;
    cin>>k>>s;
    for(i=0; i<s.size(); i++)
        v[s[i]-'a']++;
    for(i=0; i<27; i++)
        if(v[i] && v[i]%k)
            f=0;
    if(!f)
        cout<<"-1";
    else
        for(i1=0; i1<k; i1++)
            for(i=0; i<27; i++)
                if(v[i])
                    for(j=0; j<v[i]/k; j++)
                        printf("%c",i+'a');
    return 0;
}
