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
	int n,ans;
	cin>>n;
	ans=n;
	int k=2;
	int a;
	bool flag=true;
	while(flag){
		a=n/k;
		if(a==0)
			flag=false;
		else{
			a=a-k;
			a+=1;
			//cout<<a;
			if(a>0)
				ans+=a;
			else
				flag=false;
		}
		k++;
	}
	cout<<ans;
}
