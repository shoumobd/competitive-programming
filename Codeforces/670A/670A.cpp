#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<(n/7)*2+max(n%7-5,0)<<" "<<(n/7)*2+min(n%7,2);
}
