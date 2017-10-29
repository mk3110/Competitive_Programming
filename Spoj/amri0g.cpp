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
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(k==1){
			cout<<"0\n";
			continue;
		}
		sort(a,a+n);
		if(k==n){
			cout<<a[n-1]-a[0]<<endl;
			continue;
		}
		int c,d,mi=1000000000;
		for(int i=0;i+k-1<n;i++){
			mi=min(mi,(a[i+k-1]-a[i]));
		}
		cout<<mi<<endl;
	}

}
