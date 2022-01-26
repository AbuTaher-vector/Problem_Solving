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
        nn n,k,flag=0,x;
        cin>>n;
        if(n%2!=0)
        {
            k=n/2+1;
            flag=1;
        }
        else k=n/2;
        vector<nn>v1;
        vector<nn>v2;
        for(nn i=1;i<=n;i++)
        {
            cin>>x;
            if(i<=k) v1.push_back(x);
            else v2.push_back(x);
        }
        reverse(v2.begin(),v2.end());
       for(nn i=0;i<n/2;i++)
       {
           cout<<v1[i]<<" "<<v2[i]<<" ";
           if(n%2==0 && i==n/2-1) cout<<endl;
       }
       if(flag && n!=2) cout<<v1[k-1]<<endl;





    }

}
