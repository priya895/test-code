#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int count=0;
    getline(cin,s1);
    getline(cin,s2);
    char c=s2[s2.length()-1];
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==c)
        {
           count++;
        }
    }
    cout<<count;
}