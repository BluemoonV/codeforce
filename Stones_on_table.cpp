#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int a,b=0;
    cin>>a;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])
        {
            b++;
        }
    }
    cout<<b;
}
