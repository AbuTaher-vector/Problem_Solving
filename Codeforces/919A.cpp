#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn n,m;
    cin>>n>>m;
     dd a,b,c=1;
    cin>>a>>b;
    dd x=a/b*m;
    n--;
    while(n--)
    {
        cin>>a>>b;
        x=min(x,a/b*m);
    }
   printf("%.8lf\n",x);


}
