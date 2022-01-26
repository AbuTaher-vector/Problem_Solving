#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
       ss s;
       cin>>s;
       sort(s.begin(),s.end());
       nn l=s.size();
       for(nn i=l-1;i>=0;i--)
       {
           if(s[i]!=s[i-1])
           {
               cout<<s[i];
               break;
           }
           else cout<<s[i];
       }
      cout<<endl;


}
