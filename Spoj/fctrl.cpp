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
		ll n;
		cin>>n;
		ll ans=0;
		ll k;
		k=n%5;
		n-=k;
		k=5;
		while(k<=n){
			ans+=(n/k);
			k=k*5;
		}
		cout<<ans<<"\n";
	}
	
}
