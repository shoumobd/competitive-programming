#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    vector <string> v(105);
    v[0]="zero";
    v[1]="one";
    v[2]="two";
    v[3]="three";
    v[4]="four";
    v[5]="five";
    v[6]="six";
    v[7]="seven";
    v[8]="eight";
    v[9]="nine";
    v[10]="ten";
    v[11]="eleven";
    v[12]="twelve";
    v[13]="thirteen";
    v[14]="fourteen";
    v[15]="fifteen";
    v[16]="sixteen";
    v[17]="seventeen";
    v[18]="eighteen";
    v[19]="nineteen";
    v[20]="twenty";
    v[30]="thirty";
    v[40]="forty";
    v[50]="fifty";
    v[60]="sixty";
    v[70]="seventy";
    v[80]="eighty";
    v[90]="ninety";
    for(i=20;i<100;i++)
    {
        if(i%10) v[i]=v[10*(i/10)]+"-"+v[i%10];
    }
    cin>>n;
    cout<<v[n];
    return 0;
}
