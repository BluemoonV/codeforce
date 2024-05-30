#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,i,k,n,l,s;
	long long int a[200002],b[200020];
	cin>>t;
	for(;t--;){
		cin>>n;s=0;k=2000000000000000;
		for(i=1;i<=n;i++){
			cin>>a[i];
		}
		for(i=1;i<=n+1;i++){
			cin>>b[i];
		}l=b[n+1];
		for(i=1;i<=n;i++){
			s+=abs(a[i]-b[i]);
			if(a[i]>b[i])swap(a[i],b[i]);
			if(l>=a[i]&&l<=b[i])k=0;
			k=min(k,min(abs(a[i]-l),abs(b[i]-l)));
		}
		s+=k;
		cout<<s+1<<endl;
	}
}
