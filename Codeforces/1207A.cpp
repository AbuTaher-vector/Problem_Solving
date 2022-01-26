#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define string ss
int main()
{
        nn tt;
        cin>>tt;
        while(tt--)
        {
            nn b,p,f,h,c,k=0,l=0;
            cin>>b>>p>>f>>h>>c;
            b/=2;
            if(h>c)
            {
                cout<<min(b,p)*h+min(f,b-min(b,p))*c<<endl;
            }
            else{
                cout<<min(b,f)*c+min(p,b-min(b,f))*h<<endl;
            }

        }
}