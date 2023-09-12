#include<iostream>
using namespace std;
int main ()
{
    int a,n;
    cin>>a>>n;
    for(int i = 1; i<=n; i++){
        if(a%10==0)
        {
            a = a/10;
        }
        else
        {
            a = a-1;
        }
    }
    cout<<a;
}
