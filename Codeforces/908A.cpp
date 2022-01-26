#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

     ss s="13579aeiou";
     ss s1;
     nn cnt=0;
     cin>>s1;
     for(nn i=0;i<s1.size();i++)
     {
         for(nn j=0;j<s.size();j++)
         {
             if(s1[i]==s[j])
             {
                 cnt++;
                 break;
             }
         }
     }
     cout<<cnt<<endl;


}