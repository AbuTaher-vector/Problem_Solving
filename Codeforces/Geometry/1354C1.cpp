#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
  dd n;
  cin>>n;
  dd a=1/(tan(3.141592653/(2*n)));
  printf("%.9lf\n",a);

}
int main()
{
  nn n;
  cin>>n;
  while(n--) code();
}