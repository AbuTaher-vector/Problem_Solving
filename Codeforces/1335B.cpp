#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    char c='a';
    nn n,a,b;
    ss s="";
    cin>>n>>a>>b;
    nn x=0;
    for(nn i=1;i<=n;i++)
    {
       s.push_back(c);
       x++;
       if(x<b) c++;

       if(x%a==0) c='a',x=0;

    }
    cout<<s<<"\n";


}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}