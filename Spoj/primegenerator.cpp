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
typedef long long int ll;
int main()
{
	std::vector<int> prime;
	ios_base::sync_with_stdio(false);
	memset(mark,true,sizeof(mark));
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
	
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		if(n<a){
			for(int i=0;i<prime.size();i++){
			if((prime[i]>=m)&&(prime[i]<=n))
				cout<<prime[i]<<"\n";
			if(prime[i]>n)
				break;
		}
		}
		else if(m>=a){
			for(int i=m;i<=n;i++){
				if(i&1){
					int k=sqrt(i);
					bool flag=true;
					for(int j=0;j<prime.size();j++){
						if(i%prime[j]==0)
						{
							flag=false;
							break;
						}
						if(prime[j]>k)
							break;
					}
					if(flag)
						cout<<i<<"\n";
				}
			}
		}
		else{
				for(int i=0;i<prime.size();i++){
			if(prime[i]>=m)
				cout<<prime[i]<<"\n";			
			}
			for(int i=a;i<=n;i++){
				if(i&1){
					int k=sqrt(i);
					bool flag=true;
					for(int j=0;j<prime.size();j++){
						if(i%prime[j]==0)
						{
							flag=false;
							break;
						}
						if(prime[j]>k)
							break;
					}
					if(flag)
						cout<<i<<"\n";
				}
			}
		}
		
		cout<<"\n";
	}
}
