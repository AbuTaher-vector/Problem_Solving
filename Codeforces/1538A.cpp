#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    vector<nn>a(n),b(n),c(n);
    for(nn i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i],c[i]=a[i];

    }
    nn x=0,y=0,z=0,w=0;
       while(a.size()!=0)
       {
          if(a.front()==1 || a.front()==n) x++;
          a.erase(a.begin());
          y++;
          if(x==2) break;

       }
       x=0;
       while(b.size()!=0)
       {
          if(b.back()==1 || b.back()==n) x++;
          b.pop_back();
          z++;
          if(x==2) break;

       }
       x=0;
       while(c.size()!=0)
       {
          if(c.front()==1 || c.front()==n) x++;
           c.erase(c.begin());
           w++;
           if(x==1) break;

       }
       x=0;
       while(c.size()!=0)
       {
          if(c.back()==1 || c.back()==n) x++;
          c.pop_back();
          w++;
          if(x==1) break;

       }
       cout<<min(y,min(z,w))<<nl;
       
       
    
}
int main()
{
   nn tt;
   cin>>tt;
   while(tt--) code();
}