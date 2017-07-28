#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
		while(test--){
		long long k,n;
		cin>>n>>k;
		n--,k--;
		long long ans=1;
		
		k=k>n-k?n-k:k;
		int j=1;
		for(;j<=k;j++,n--){
			if(n%j==0){
				ans*=n/j;
			}
			else if(ans%j==0){
				ans=ans/j*n;
			}
			else{
				ans=(ans*n)/j;
			}
		}
		cout<<ans<<endl;
	}
    return 0; 
}
	
