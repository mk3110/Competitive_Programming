#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll reverse(ll n){
	ll i=n+1;
	while(1){
		ll temp=i;
		ll x=0,y=0;
		while(temp!=0){
			x=temp%10;
			y=y*10+x;
			temp/=10;
		}
		if(y==i)
			return i;
		i++;
	}
}
 
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		ll n;
		scanf("%lld",&n);
		ll ans=reverse(n);
		printf("%lld\n",ans);
	}
	return 0;
} 
