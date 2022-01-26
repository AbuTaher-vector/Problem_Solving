#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    // UVA-957 : Popes

     nn y,n,x;
     vector<nn>v;
     while(cin>>y)
     {
        cin>>n;
        v.clear();
        while(n--)
        {
            cin>>x;
            v.push_back(x);

        }
     nn first,last,a,b,mx=0;
 for(nn i=0;i<v.size();i++)
 {
    nn j=i,cnt=0;
    while(j<v.size() && v[j]<v[i]+y) 

        {
            cnt++;
            j++;
        }

    if(cnt>mx) 
    {
        mx=cnt;
        first=v[i],last=v[j-1];
    }
   
    
 }
 cout<<mx<<" "<<first<<" "<<last<<nl;

}

 
     

}