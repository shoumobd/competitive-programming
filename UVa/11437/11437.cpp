#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define PI 2*acos(0.0)

pair <double, double> line_intersect(double Ax,double Ay,double Bx,double By,double Cx,double Cy,double Dx,double Dy)
{
    double a1=By-Ay;
    double b1=Ax-Bx;
    double c1=a1*(Ax)+b1*(Ay);
    double a2=Dy-Cy;
    double b2=Cx-Dx;
    double c2=a2*(Cx)+b2*(Cy);
    double determinant=a1*b2-a2*b1;
    if(determinant==0)
    {
        return make_pair(FLT_MAX,FLT_MAX);
    }
    else
    {
        double x=(b2*c1-b1*c2)/determinant;
        double y=(a1*c2-a2*c1)/determinant;
        return make_pair(x,y);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll ans;
    double a,ax,ay,bx,by,cx,cy,dx,dy,ex,ey,fx,fy,px,py,qx,qy,rx,ry;
    pair <double, double> t;
    cin>>n;
    while(n--)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=(2*bx+cx)/3.0;
        dy=(2*by+cy)/3.0;
        ex=(2*cx+ax)/3.0;
        ey=(2*cy+ay)/3.0;
        fx=(2*ax+bx)/3.0;
        fy=(2*ay+by)/3.0;
        t=line_intersect(bx,by,ex,ey,ax,ay,dx,dy);
        px=t.first;
        py=t.second;
        t=line_intersect(bx,by,ex,ey,cx,cy,fx,fy);
        qx=t.first;
        qy=t.second;
        t=line_intersect(ax,ay,dx,dy,cx,cy,fx,fy);
        rx=t.first;
        ry=t.second;
        a=0.5*abs(px*qy+qx*ry+rx*py-px*ry-rx*qy-qx*py);
        ans=a;
        if(a-ans>=0.5) ans++;
        cout<<ans<<"\n";
    }
    return 0;
}
