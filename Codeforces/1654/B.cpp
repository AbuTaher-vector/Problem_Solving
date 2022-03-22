#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
    ss s;
    nn pos;
    cin>>s;
    while(1)
    {
        char x=s[0];
        pos=s.find(x,1);
        if(pos<0) break;
        s.erase(0,1);

    }
    cout<<s<<nl;


}
int main()
{ 
   nn tt;
   cin>>tt;
   while(tt--) code();  
}