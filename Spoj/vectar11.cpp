#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
bool ans[1000001];
int sq[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	memset(ans,false,sizeof(ans));
	sq[0]=0;
	for(int i=1;i<1001;i++)
		sq[i]=i*i;
	int t;
	cin>>t;
	for(int i=1;i<1000001;i++){
		for(int j=1;sq[j]<=i;j++){
			ans[i]|=!ans[i-sq[j]];
			if(ans[i])
				break;
		}
		
	}
	while(t--){
		int n;
		cin>>n;
			if(ans[n])
				cout<<"Win\n";
			else
				cout<<"Lose\n";
	}
}
