#include <bits/stdc++.h>

using namespace std;

int main() {

	string s1,s2;
	int l1,l2,i,a,b,c;
	long long x=0;
	cin>>s1>>s2;
	l1=s1.size();
	l2=s2.size();
	vector<int> v(l1, 0);
	v[0]=(s1[0]=='0');
	for(i=1;i<l1;i++)
		v[i]=v[i-1]+(s1[i]=='0');
	for(i=0;i<l2;i++)
    {
		a=max(0,i-(l2-l1));
		b=min(l1-1,i);
        if(a>0)
            c=v[b]-v[a-1];
        else
            c=v[b];
		if(s2[i]=='0')
			c=b-a+1-c;
		x+=c;
	}
    printf("%I64d",x);
	return 0;
}
