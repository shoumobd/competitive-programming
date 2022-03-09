#include <bits/stdc++.h>

using namespace std;

int f1(int x, int y)
{
    if(y>=x-1 && x>=(y-1)/2) return 1;
    return 0;
}

int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    if(f1(x1,y2) || f1(x2,y1)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
