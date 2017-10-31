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
		string k;
		cin>>k;
		int ma=-1,co=0;
		bool flag=false;
		for(int i=0;i<k.size();i++){
			if(k[i]!=32)
				flag=true;
			else
				flag=false;
			if(flag)
				co++;
			else{
				cout<<co<<endl;
				ma=max(co,ma);
				co=0;
			}
		}
		cout<<ma<<endl;
	}
}
