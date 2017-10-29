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
	int luc[1001];
	bool prim[3000];
	std::vector<int> v;
	memset(prim,true,sizeof(prim));
	prim[0]=prim[1]=false;
	for(int i=2;i<3000;i++){
		if(prim[i]==true){
			for(int j=2;j*i<3000;j++)
				prim[i*j]=false;
		}
	}	
	for(int i=2;i<3000;i++){
		if(prim[i]==true){
			v.push_back(i);
		}		
	}
	//for(int i=0;i<v.size();i++)
		//cout<<v[i]<<endl;
	luc[0]=0;
	luc[1]=30;
	luc[2]=42;
	int co=3;
	for(int i=43;i<3000;i++){
			if(co==1001)
				break;
			else{
				int ic=i;
				int coun =0;
				for(int j=0;j<v.size();j++){
					if(ic%v[j]==0){
						coun++;
						ic=ic/v[j];
						if(coun==3)
						{
							luc[co]=i;
							co++;
							break;
						}
						while(ic%v[j]==0)
							ic/=v[j];
						if(ic==1)
							break;
					}
				}
		}
	}
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			cout<<luc[n]<<endl;
		}

}
