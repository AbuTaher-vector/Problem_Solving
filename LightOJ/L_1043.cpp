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
        dd ab,ac,bc,ratio;
        cin>>ab>>ac>>bc>>ratio;
        dd abc=ratio+1;
        dd ad=sqrt(ratio/abc)*ab;
        cout<<"Case "<<i<<": ";
        printf("%.10lf\n",ad);

    }
   
}