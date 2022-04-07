#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    dd H,L;
    cin>>H>>L;
    dd ans=(L*L-H*H)/(2*H);
    printf("%.13lf\n",ans);


}