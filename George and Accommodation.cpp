#include<iostream>
using namespace std;
int main()
{
    int a,b,n,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(b-a>=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;

}
