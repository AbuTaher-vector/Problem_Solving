#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
   nn tt;
   cin>>tt;
    for(nn i=1;i<=tt;i++)
    {
        nn n,k;
        cin>>n>>k;
        ss s;
        char a='A';
        while(n--)
        {
          s.push_back(a);
          a++;
        }
        cout<<"Case "<<i<<":"<<nl;
        nn x=0;
        do
        {
           cout<<s<<nl;
           x++;
        }while(next_permutation(s.begin(),s.end()) && x<k);
    }
}