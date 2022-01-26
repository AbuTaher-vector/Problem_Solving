#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     nn a,b,c;
     cin>>a>>b>>c;
     b/=2;
     c/=4;
     nn mn=min(a,min(b,c));
     cout<<mn+mn*2+mn*4<<endl;

}
