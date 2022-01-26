#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt,s=0;
    ss t;
    cin>>tt>>t;
    for(nn i=0;i<tt;i++)
    {
        if(t[i]=='-' && s!=0) s--;
        else if(t[i]=='+') s++;
    }
    cout<<s<<endl;


}