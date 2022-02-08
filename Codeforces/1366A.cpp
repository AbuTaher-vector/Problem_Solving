#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn a,b;
     cin>>a>>b;
     cout<<min(a,min(b,(a+b)/3));
     
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();

}