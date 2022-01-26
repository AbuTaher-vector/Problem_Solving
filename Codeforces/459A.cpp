#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
      nn x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      nn x=abs(y2-y1),y=abs(x2-x1);
      if(x1==x2 || y2==y1) cout<<x1+x<<" "<<y1+y<<" "<<x2+x<<" "<<y2+y<<nl;
      else if(x==y) cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<nl;
      else cout<<-1<<nl;
  
     
} 
int main()
{
   code(); 
}