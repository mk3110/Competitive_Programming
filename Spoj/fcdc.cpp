#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
bool temp[10000001];
int main()
{
	memset(temp,true,sizeof(temp));
	for(int i=2;i<10000001;i++){
		if(temp[i]==true){
			for(int j=2;j*i<10000001;j++)
				temp[i*j]=false;
		}
	}
	std::vector<int> vec;
	for(int i=1;i<10000001;i++){
		if(temp[i]==true)
			vec.push_back(i);
	}
	ios_base::sync_with_stdio(false);
	int a,b;
	cin>>a>>b;
	int fac_a,fac_b,div_a=1,div_b=1;
	if(a==b)
		cout<<"0";
	else{
		for(int i=0;i<vec.size();i++){
			if(a%vec[i]==0)
				fac_a=vec[i];
			if(b%vec[i]==0)
				fac_b=vec[i];
			if(vec[i]>b)
				break;
		}
		cout<<fac_a<<" "<<fac_b;
		a=a/fac_a;
		if(a%fac_a==0){
			div_a++;
			a=a/fac_a;
		}
		b=b/fac_b;
		if(b%fac_b==0){
			div_b++;
			b=b/fac_b;
		}
		a=fac_a*div_a;
		b=fac_b*div_b;
		cout<<b-a;
	}
	

	
}
