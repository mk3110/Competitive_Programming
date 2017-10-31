#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
ll ans[51],sq[52];
int main()
{
	ios_base::sync_with_stdio(false);
	ans[0]=0;
	ans[1]=2;
	ans[2]=4;
	sq[0]=0;
	sq[1]=1;
	sq[2]=2;
	sq[3]=4;
	for(int i=3;i<51;i++){
		ll temp=1<<i;
		sq[i+1]=temp;
		ans[i]=2*ans[i-1]+(temp/2);

	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll temp=ans[n-1]+(sq[n]);
		cout<<sq[n]<<" "<<temp;
	}
	
}
