#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    // UVA-729 : The Hamming Distance

    nn t;
    cin>>t;
    while(t--)
    {
        nn n,h;
        cin>>n>>h;
        ss s(n,'0');
        for(nn i=0;i<h;i++) s[i]='1';
            reverse(s.begin(),s.end());
         do
         {
        cout<<s<<nl;
         }while(next_permutation(s.begin(),s.end()));
         if(t) cout<<nl;

    }
   
     

}