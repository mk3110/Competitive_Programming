#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <cmath>
using namespace std;
bool mark[10000001];
std::vector<int> prime;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	memset(mark,true,sizeof(mark));
	//cout<<"hey";
	int a=10000001;
	for(int i=2;i*i<a;i++){
		if(mark[i]){
			for(int j=2;(j*i)<a;j++)
				mark[i*j]=false;
		}	
	}
	for(int i=2;i<a;i++){
		if(mark[i])
				prime.push_back(i);
	}
	//cout<<prime.size()<<endl;	
	ll n;
	while(cin>>n){
		bool flag=false;
	for(ll i=n;i==n;i--){
				if(i&1){
					ll k=sqrt(i);
					flag=true;
					for(int j=0;j<prime.size();j++){
						if(i%prime[j]==0)
						{
							flag=false;
							break;
						}
						if(prime[j]>k)
							break;
					}
					if(flag){
						cout<<i<<endl;
						break;
					}
					
				}
			}
	if(!flag){
		ll ans=n;
		for(int i=0;i<prime.size();i++){
			if(ans==1)
				break;
			if(ans%prime[i]==0){
				cout<<prime[i]<<endl;
				while(ans%prime[i]==0)
					ans/=prime[i];
			}
		}
	}
	}
}
