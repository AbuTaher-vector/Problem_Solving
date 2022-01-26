#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
         nn n,x,sum=0;
         cin>>n>>x;
         while(n--)
         {
             nn p;
             cin>>p;
             sum+=p;
         }
         sum=abs(sum);
         if(sum%x==0) cout<<sum/x<<endl;
         else cout<<sum/x+1<<endl;

}
