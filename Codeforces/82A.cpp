#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
   
    vector<ss>v{"Sheldon","Leonard","Penny","Rajesh","Howard"};
    nn n;
    cin>>n;
    while(n>5) n=n/2-2;
    cout<<v[n-1]<<nl;

}