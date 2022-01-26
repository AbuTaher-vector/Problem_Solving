#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int prime(nn t)
{
    nn flag=0;
    for(nn i=2;i<=sqrt(t);i++)
    {
        if(t%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag) return 0;
    else return 1;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--)
    {
        nn x;
        cin>>x;
       nn k=x+1;
       while(prime(k)==0) k++;
       nn a=k;
       k+=x;
      while(prime(k)==0) k++;
      nn b=k;
      cout<<a*b<<endl;
    }

}
