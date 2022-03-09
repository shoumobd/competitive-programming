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
    int r1,r2,c1,c2,d1,d2,a1,a2,a3,a4,f=0;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(a1=1; a1<=9; a1++)
    {
        if(f)
            break;
        for(a2=1; a2<=9; a2++)
        {
            if(f)
                break;
            if(a2==a1)
                continue;
            for(a3=1; a3<=9; a3++)
            {
                if(f)
                    break;
                if(a3==a2 || a3==a1)
                    continue;
                for(a4=1; a4<=9; a4++)
                {
                    if(f)
                        break;
                    if(a4==a3 || a4==a2 || a4==a1)
                        continue;
                    if(a1+a2==r1 && a3+a4==r2 && a1+a3==c1 && a2+a4==c2 && a1+a4==d1 && a2+a3==d2)
                    {
                        cout<<a1<<" "<<a2<<"\n"<<a3<<" "<<a4;
                        f=1;
                        break;
                    }
                    //cout<<"Here,\n"<<a1<<" "<<a2<<"\n"<<a3<<" "<<a4<<"\n";
                }
            }
        }
    }
    if(!f)
        cout<<f-1;
    return 0;
}
