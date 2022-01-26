#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn a,b;
    cin>>a>>b;
   if(a==9 && b==1) cout<<9<<" "<<10<<endl;
   else if(a>b) cout<<-1<<endl;
   else if(b-a>1) cout<<-1<<endl;
   else if(a==b) cout<<a*10+1<<" "<<b*10+2<<endl;
   else if(b-a==1) cout<<a<<" "<<b<<endl;
}