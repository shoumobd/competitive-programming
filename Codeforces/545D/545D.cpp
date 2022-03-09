#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue <long long> p;
    long long n,t,i,s=0,c=0;
    scanf("%I64d",&n);
    t=n;
    while(t--)
    {
        scanf("%I64d",&i);
        p.push(-i);
    }
    t=n;
    while(t--)
    {
        if(s<=(-1*p.top()))
        {
            c++;
            s+=(-1*p.top());
        }
        //printf("top = %I64d, s = %I64d, c = %I64d\n",-1*p.top(),s,c);
        p.pop();
    }
    printf("%I64d",c);
    return 0;
}
