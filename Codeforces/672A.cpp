#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

     ss s="";
     nn n;
     cin>>n;
     for(nn i=1;i<1000;i++) s+=to_string(i);//to_string()  is a build in function which convert any int to string
     cout<<s[n-1]<<endl;

}
