#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{      
    nn x;
    while(1)
    {
        cin>>x;
        if(!x) break;
        if(x>=101) cout<<"f91("<<x<<") = "<<x-10<<"\n";
        else cout<<"f91("<<x<<") = "<<91<<"\n";
    }	
}