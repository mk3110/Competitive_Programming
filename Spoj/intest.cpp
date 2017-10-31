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
	int n,k,ans=0;
	cin>>n>>k;
	while(n--){
		int t;
		cin>>t;
		if(t%k==0)
			ans++;
	}
	cout<<ans;
}
