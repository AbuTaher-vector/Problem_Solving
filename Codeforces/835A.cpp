#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int first=s*v1+t1*2;
    int second=s*v2+t2*2;
    if(first<second) cout<<"First"<<endl;
    else if(second<first) cout<<"Second"<<endl;
    else cout<<"Friendship"<<endl;

}