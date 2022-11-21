#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    while(n>0)
    {
      int r=n%3;
      ans=ans*10+r;
      n/=3;
    }
    cout<<ans;
}