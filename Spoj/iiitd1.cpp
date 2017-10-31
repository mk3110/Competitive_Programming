#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<0)
		{
			ll a=-n;
			ll q=a;
			ll k=1;
				a=a/10;
			while(a>0){
				k*=10;;
				a/=10;
			}
			k=q+k-n;
			cout<<k<<"\n";
		}
		else{
			ll k=1;
		n=n/10;
		while(n>0){
			k*=10;;
			n/=10;
		}
		cout<<k<<"\n";
		}
	}
}
