#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    vector<nn>v(40);
    nn n,cnt=0;
    cin>>n;
    n/=2;
    n--;
    nn a=10;
    while(n--) a*=10;
    for(nn i=0;i<a;i++)
    {
        nn sum=0;
        nn x=i;
        while(x>0)
        {
            sum+=x%10;
            x/=10;

        }
        v[sum]++;
    }
    for(nn i=0;i<a;i++)
    {
        nn sum=0;
        nn x=i;
        while(x>0)
        {
            sum+=x%10;
            x/=10;

        }
        cnt+=v[sum];
    }
    cout<<cnt<<nl;    

      
}