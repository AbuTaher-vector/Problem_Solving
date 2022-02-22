#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n;
    cin>>n;
    for(nn i=1;i<=n;i++)
    {
          dd v1,v2,v3,a1,a2;
          cin>>v1>>v2>>v3>>a1>>a2;
          dd t1=v1/a1;
          dd t2=v2/a2;
          dd t3=max(t1,t2);
          dd train=(v1*t1-.5*a1*t1*t1)+(v2*t2-.5*a2*t2*t2);
          cout<<"Case "<<i<<": ";
          printf("%.10lf %.10lf\n",train,t3*v3);
      
     }
   
}