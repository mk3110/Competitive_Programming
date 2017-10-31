#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
int dp_sum[10000001];
std::vector<int> sol(10000001);
int main()
{
	ios_base::sync_with_stdio(false);
	int prime[73];
	memset(prime,0,sizeof(prime));
	int co=10;
	for(int i=0;i<10;i++)
		dp_sum[i]=i;
	dp_sum[10000000]=1;
	for(int i=10;i<1000001;i=i*10){
		for(int j=i;(j/i)<10;j+=i){
			int check=(j/i);
			for(int k=0;k<i;k++){
				dp_sum[co]=check+dp_sum[k];
				co++;
			}
			
		}
	}
	prime[0]=1;
	prime[1]=1;
	for(int i=2;i<74;i++)
	{
		if(prime[i]==0)
		{
			for(int j=2;(j*i)<74;j++)
				prime[i*j]=1;
		}
	}
	sol[0]=sol[1]=0;
	co=0;
	for(int i=2;i<10000001;i++){
		if(prime[dp_sum[i]]==0)
		{
			co++;
			sol[i]=co;
		}
		else
			sol[i]=co;
	}
	//for(int i=0;i<=10;i++)
		//cout<<sol[i]<<endl;
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a<10000001){
			if(b<10000001){
			if(a>0)
				cout<<sol[b]-sol[a-1];
			else
				cout<<sol[b];
			cout<<"\n";
			}
			else{
			int ans;
			if(a>0){
				ans=sol[10000000]-sol[a-1];
			}
			else
				ans=sol[10000000];
			for(int i=10000001;i<b;i++){
				int te=i%10000000;
				int ty=i/10000000;
				if(prime[dp_sum[te]+ty]==0)
					ans++;
			}
			cout<<ans<<"\n";
			}
		}
		else{
			int ans1=0;
			for(int i=a;i<=b;i++){
				int te=i%10000000;
				int ty=i/10000000;
				if(prime[dp_sum[te]+ty]==0)
					ans1++;
			}
			cout<<ans1<<"\n";
			
		}
		
	}
}
