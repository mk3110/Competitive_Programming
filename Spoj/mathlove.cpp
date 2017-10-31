#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <cmath>
using namespace std;
typedef long long int ll;
ll bsearch(ll start,ll end,ll check){
	if(start>end)
		return -1;
	ll mid=(start+end)/2;
	ll a=(mid*(mid+1))/2;
	if(a==check)
		return mid;
	else if(a<check)
		return(bsearch(mid+1,end,check));
	else
		return(bsearch(start,mid-1,check));
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll c;
		cin>>c;
		ll as=bsearch(1,100000000,c);
		if(as==-1)
			cout<<"NAI\n";
		else
			cout<<as<<endl;
	}
}
