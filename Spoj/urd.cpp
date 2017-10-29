#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
int ans[10000001];
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	string s,k;
	while(t--){
		memset(ans,0,sizeof(ans));
		cin>>s>>k;
		int s1=s.size();
		int k1=k.size();
		int a[s1];
		for(int i=s1-1,j=0;i>=0;i--,j++)
			a[i]=s[j]-'0';
		for(int i=0;i<k1;i=i+16){

				ll b=0,mod=1,temp=0;
				//cout<<b;
			v.clear();
			if((k1-i)<16){
				for(int j=i;j<k1;j++){
					b+=((int(k[j]-'0'))*mod);
					mod*=10;
				}
			}
			else{
				for(int j=i;j<=i+15;j++){
					b+=((int(k[j]-'0'))*mod);
					mod*=10;
				}
			}
			//cout<<b<<endl;

			
			for(int h=0;h<i;h++)
				v.push_back(0);
			for(int j=0;j<s1;j++){
				ll y=a[j]*b+temp;
				ll z=y%10;
				v.push_back(z);
				temp=y/10;
			}
			while(temp!=0){
				ll z=temp%10;
				v.push_back(z);
				temp/=10;
			}
			//for(int o=v.size()-1;o>=0;o--)
				
			ll io=0;
			while(io<v.size()){
				ll y=ans[io]+v[io]+temp;
				temp=y/10;
				ans[io]=y%10;
				io++;
			}
			while(temp!=0){
				ll z=temp%10;
				ans[io]=z;
				io++;
				temp/=10;
			}

		}
		int o;
		for(o=s1+k1-1;o>=0;o--)
		if(ans[o]!=0)
			break;
		if(o<0)
			o=0;
		for(;o>=0;o--)
			cout<<ans[o];
	cout<<endl;
	}
}
