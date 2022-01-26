#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

        nn n,m,a=0,b=0;
        cin>>n>>m;
        vector<nn>v;
        nn k=min(n,m);
        while(n--)
        {
            nn x;
            cin>>x;
            v.push_back(x);
        }
         while(m--)
        {
            nn x;
            cin>>x;
            v.push_back(x);
        }
        for(nn i=0;i<v.size();i++)
        {
            if(v[i]%2==0) a++;
            else b++;
        }
        cout<<min(k,min(a,b))<<endl;


}
