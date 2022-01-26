#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn arr[1000];
int main()
{

     nn tt;
      cin>>tt;
     while(tt--)
     {
         nn a,b,r,c;
         cin>>a>>b>>r>>c;
         nn first=abs(r-1)+abs(c-1);
         nn second=abs(a-r)+abs(c-1);
         nn third=abs(r-1)+abs(c-b);
         nn fourth=abs(r-a)+abs(c-b);
         cout<<max(first,(max(second,(max(third,fourth)))))<<endl;

     }


}