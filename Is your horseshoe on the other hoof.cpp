#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,count=1,ans;
    cin>>a>>b>>c>>d;
    if(a!=b && a!=c && a!=d )
    {
        count++;
    }
    if(b!=c && b!=d)
    {


        count++;
    }
    if(c!=d)
    {
        count++;
    }
    ans=(4-count);
    cout<<ans<<endl;
    return 0;

}
