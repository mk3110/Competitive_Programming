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
vector<ll> prime;
void simpleSieve(int limit)
{
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
 
    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }
 
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
        }
    }
}

void segmentedSieve(ll n)
{
  
    int limit = floor(sqrt(n))+1;  
    simpleSieve(limit); 
 
    ll low  = limit;
    ll high = 2*limit;
 
    while (low < n)
    {
      
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
 
        for (ll i = 0; i < prime.size(); i++)
        {
           
            ll loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];
 
            for (ll j=loLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }
 
        for (ll i = low; i<high; i++)
            if (mark[i - low] == true)
                prime.push_back(i);
 
        low  = low + limit;
        high = high + limit;
        if (high >= n) high = n;
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	segmentedSieve(40000000000);
	int t;
	cin>>t;
	ll check=prime.size();
	while(t--){
	ll n;
	cin>>n;
	if(n>=prime[check/2]){
		for(int i=(check/2);i<check;i++){
			if(n<=prime[i]){
				cout<<prime[i]<<endl;
				break;
			}
		}
	}
	else{
		for(int i=0;i<=check/2;i++){
			if(n<=prime[i]){
				cout<<prime[i]<<endl;
				break;
			}
		}
	}
	}
}
