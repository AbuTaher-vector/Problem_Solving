#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ax,ay,bx,by,cx,cy,dx,dy,area,i,q;
   cin>>a;
    for(i=1;i<=a;i++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=cx+ax-bx;
        dy=cy+ay-by;
        q=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        if(q<0)
            q*=-1;
        area=0.5*q;
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }
}