#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt;
    cin>>tt;
    while(tt--)
    {
             nn k;
             cin>>k;
             vector<nn>v;
            if(k>=3) v.push_back(989);
            else   if(k>=2) v.push_back(98);
            else  if(k>=1) v.push_back(9);
            nn a=k;
            a-=3;
           nn x=-1;
         for(nn i=1;i<=a;i++)
         {
                x++;
            v.push_back(x);
            if(x==9) x=-1;
        }
         for(nn i=0;i<v.size();i++) cout<<v[i];
         cout<<endl;
    }

}