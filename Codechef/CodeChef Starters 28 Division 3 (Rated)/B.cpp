#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     vector<nn>v{6,7,13,14,20,21,27,28};
     nn n,cnt=8;
     cin>>n;
     vector<nn>a(n);
     for(nn i=0;i<n;i++) cin>>a[i];
        for(nn i=0;i<n;i++)
        {
            nn flag=1;
             for(nn j=0;j<v.size();j++)
             {
                 if(a[i]==v[j])
                 {
                    flag=0;
                    break;
                 }
             }
             if(flag) cnt++;
        }
        cout<<cnt<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}