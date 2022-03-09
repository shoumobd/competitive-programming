#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(10-n%10<n%10) cout<<n+10-n%10<<"\n";
    else cout<<n-n%10<<"\n";
    return 0;
}
