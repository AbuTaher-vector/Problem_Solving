#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n;
    cin>>n;
    vector<nn>a(n),b(n);
    for(nn i=0;i<n;i++) cin>>a[i];
      for(nn i=0;i<n;i++) cin>>b[i];  
     nn cnt=0,cntt=0;
     for(nn i=0;i<n;i++)
     {
        for(nn j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                if(i==j) cnt++;
                else cntt++;

            }
        }
     } 
     cout<<cnt<<nl<<cntt<<nl;     
    
    
}