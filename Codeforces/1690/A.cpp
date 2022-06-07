#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    nn k=n/3;
    nn l=n%3;
    nn a=k,b=k+1,c=k-1;
    if(l==1) b++;
    else if(l==2) a++,b++;
    cout<<a<<" "<<b<<" "<<c<<nl;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     
     nn tt;
     cin>>tt;
     while(tt--) code();
     
}