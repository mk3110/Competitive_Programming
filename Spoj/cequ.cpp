#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
int gcd(int a,int b){
	if(b==0)
		return a;
	else 
		return(gcd(b,a%b));
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t,cas=1;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int q=gcd(a,b);
		if(c%q==0)
			cout<<"Case "<<cas<<": Yes\n";
		else
			cout<<"Case "<<cas<<": No\n";
		cas++;
	}
}
