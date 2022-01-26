#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
nn j=0;
void code()
{
     nn a,b;
     cin>>a>>b;
     if(a%2==0) a++;
     if(b%2==0) b--;
     nn sum=0;
     for(nn i=a;i<=b;i+=2) sum+=i;

      j++;
      cout<<"Case "<<j<<": "<<sum<<"\n";
     
}
int main()
{

    nn tt;
    cin>>tt;
    while(tt--) code();

}