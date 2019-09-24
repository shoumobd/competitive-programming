#include <bits/stdc++.h>

using namespace std;

int prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(!(n%i)) return 0;
    }
    return 1;
}

int main()
{
    int n,n1,tn,f=0;
    while(1)
    {
        cin>>n;
        if(!cin) break;
        tn=n;
        n1=0;
        while(tn)
        {
            n1*=10;
            n1+=(tn%10);
            tn/=10;
        }
        //cout<<n<<" "<<n1<<"\n";
        if(!prime(n)) f=0;
        else
        {
            if(!prime(n1) || n1==n) f=1;
            else f=2;
        }
        if(f==0) printf("%d is not prime.\n",n);
        else if(f==1) printf("%d is prime.\n",n);
        else if(f==2) printf("%d is emirp.\n",n);
    }
    return 0;
}
