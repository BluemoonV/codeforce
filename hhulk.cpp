#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1; i<a; i++)
    {
        if(i%2!=0)
        {
            cout<<"I hate that ";
        }
        else
            cout<<"I love that ";
    }
    if(a%2==0)
    {
        cout<<"I love it";
    }
    else
       cout<<"I hate it";
}
