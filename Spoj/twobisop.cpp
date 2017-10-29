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
	int a[4];
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	bool flag;
	string s[8];
	while(t--){
		flag=false;
		//memset(a,0,sizeof(as));
		int i,j;
		for(i=0;i<8;i++)
			cin>>s[i];
		for(i=0;i<8;i++)
			for(j=0;j<8;j++)
			{
				if(s[i][j]=='B')
					{
						if(flag){
							a[2]=i;
							a[3]=j;
							break;
						}
						else{
							a[0]=i;
							a[1]=j;
							flag=true;
						}
					}
			}
			//getline(cin,ka);
			int check1,check2;
			check1=a[2]-a[0];
			check2=a[3]-a[1];
			 if((check1==check2)||(check1==(-1*check2)))
			cout<<"Yes\n";
			else
				cout<<"No\n";
			/*for(int i=0;i<8;i++){
				for(int j=0;j<8;j++)
					cout<<a[i][j]<<" ";
					cout<<endl;
			}*/
	}
}
