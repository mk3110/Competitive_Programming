#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
int cube[51];
int main()
{
	ios_base::sync_with_stdio(false);
	for(int i=0;i<51;i++)
		cube[i]=i*i*i;
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<51;i++){
		if(cube[i]>n)
			break;
		if(cube[i]==n)
			ans++;
		for(int j=i;j<51;j++){
			if(cube[j]+cube[i]>n)
			break;
			if(cube[j]+cube[i]==n)
			ans++;
			for(int k=j;k<51;k++){
				if(cube[k]+cube[j]+cube[i]>n)
				break;
				if(cube[k]+cube[j]+cube[i]==n)
				ans++;
				for(int l=k;l<51;l++){
					if(cube[l]+cube[k]+cube[j]+cube[i]>n)
					break;
					if(cube[l]+cube[k]+cube[j]+cube[i]==n)
					ans++;
					for(int m=l;m<51;m++){
						if(cube[m]+cube[l]+cube[k]+cube[j]+cube[i]>n)
						break;
						if(cube[m]+cube[l]+cube[k]+cube[j]+cube[i]==n)
						{
							ans++;
							break;
						}
					}
				}
			}
		}
	}
	cout<<ans;
}
