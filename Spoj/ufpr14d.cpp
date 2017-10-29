#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef unsigned int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int sum[n+1];
	sum[0]=0;
	int temp;
	for(int i=1;i<=n;i++){
		cin>>temp;
		sum[i]=sum[i-1]+temp;
	}
	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<sum[b]-sum[a-1]<<endl;
	}
}
