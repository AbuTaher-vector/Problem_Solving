#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     nn n,m;
     cin>>n>>m;
     nn k=1;
     while(1)
     {
        if(k>n) k=1;
        if(m>=k) m-=k;
        else break;
        k++;
     }
     cout<<m<<endl;
}
