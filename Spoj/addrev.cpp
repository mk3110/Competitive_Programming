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
		int a,b;
		cin>>a>>b;
		int c=0,d=0;
		while(a%10==0)
			a=a/10;
		while(b%10==0)
			b=b/10;
		int mod=1;
		while(a/mod>9){
			mod=mod*10;
		}
		while(a!=0){
			c+=(a%10)*mod;
			mod/=10;
			a=a/10;
		}
		mod=1;
		while(b/mod>9)
			mod*=10;
		while(b!=0){
			d+=(b%10)*mod;
			mod/=10;
			b=b/10;
		}
		ll sum=c+d;
		while(sum%10==0)
			sum/=10;
		mod=1;
		ll ans=0;
		while(sum/mod>9){
			mod=mod*10;
		}
		while(sum!=0){
			ans+=(sum%10)*mod;
			mod/=10;
			sum/=10;
		}
		cout<<ans<<endl;
	}
}
