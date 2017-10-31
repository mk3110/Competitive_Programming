#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
int arr[20001];
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		memset(arr,0,sizeof(arr));
		int n;
		cin>>n;
		int arr2[n];
		for(int i=0;i<n;i++){
			cin>>arr2[i];
			arr[arr2[i]+10000]++;
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(arr2[i]&1)
				;
			else{
				int z=(arr2[i]/2);
				//cout<<z<<"\n";
				if(arr[z+10000])
					ans++;
			}
		}
		cout<<ans<<endl;
	}
	
}
