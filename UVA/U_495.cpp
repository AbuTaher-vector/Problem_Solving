#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
ss v[50000];
ss findSum(ss str1, ss str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    ss str = "";
 
    int n1 = str1.length(), n2 = str2.length();
 
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
 
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    if (carry)
        str.push_back(carry+'0');
 
    reverse(str.begin(), str.end());
 
    return str;
}
void fib()
{
  v[0]="0";
  v[1]="1";
  for(nn i=2;i<=5000;i++)
  {
    v[i]=findSum(v[i-1],v[i-2]);
  }
}
int main()
{
  fib();
  nn tt;
  while(scanf("%d",&tt)==1)
  {
    cout<<"The Fibonacci number for "<<tt<<" is "<<v[tt]<<"\n";

  }

     
    
}