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
	//ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%*c %d",&n);
		ll sum=0,temp;
		for(int i=0;i<n;i++){
			scanf("%lld",&temp);
			sum+=temp;
			if(sum>=n)
				sum=sum%n;
		}
		 if(sum==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
