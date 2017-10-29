#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;
#define EOL '\0'
#define null '1'
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string s;
	char k[(2*n)+1];
	cin>>s;
	//memset(k,null,sizeof(k));
	k[2*n]=EOL;
	for(int i=0;i<2*n;i=i+2)
	{
		int p1=-1, p2=-1;
		int a[4]={1,1,1,1};
			a[s[i]-65]=0;
			a[s[i+1]-65]=0;		
		for(int j=0;j<4;j++)
		{
			if(a[j]==1)
			{
				if(p1==-1) p1=j;
				else p2=j;
			}
		}
		if(k[i-1]==65+p1)
		{
			k[i]=65+p2;
			k[i+1]=65+p1;
		}
		else
		{
			k[i]=65+p1;
			k[i+1]=65+p2;
		}
}
	cout<<k;

}
