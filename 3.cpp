#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,5,6,8,9,11,16,18,19,26,28,60,61,68,69,80,81,86,88,89,90,91,96,98,99,100,101};
    int n;
    cin>>n;
    cout<<v[n-2];
}
