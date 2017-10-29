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
	char c;
	bool aksh,flag=true;
	int w,b,r,totw=0,totr=0,totb=0,teamr=0;
	while(cin>>c){
	if(flag){
		if((c=='A')||(c=='C'))
		aksh=true;
		else
		aksh=false;
		flag=false;	
	}
	if(c!='#'){
		cin>>w>>b>>r;
		if(aksh){
			if((c=='A')||(c=='C')){
				//teamw+=w;
				//teamb+=b;
				teamr+=r;
			}
		}
		else{
			if((c=='B')||(c=='D')){
				//teamw+=w;
				//teamb+=b;
				teamr+=r;
			}
		}
		totw+=w;
		totr+=r;
		totb+=b;
		//if(((totb==9)||(totw==9))&&(totr==1))
			//break;
		//cin>>c;
	}
	else{
		if(totr!=1)
		cout<<"Incomplete game.\n";
	else if((totw==9)||(totb==9)){
		int points=0;
		if((totw==9)&&(totb==9)){
				if(aksh){
					if(teamr==1)
					cout<<"Team-1 win and the point is 5.\n";
					else
					cout<<"Team-2 win and the point is 5.\n";
				}
				else{
					if(teamr==1)
					cout<<"Team-2 win and the point is 5.\n";
					else
					cout<<"Team-1 win and the point is 5.\n";
				}
		}
		else if(totw==9){
			points=9-totb;
			points+=(teamr*5);
			if(aksh)
				cout<<"Team-1 win and the point is "<<points<<".\n";
			else
				cout<<"Team-2 win and the point is "<<points<<".\n";
		}
		else{
			points=9-totw;
			if(teamr==0)
			points+=5;
			if(aksh)
				cout<<"Team-2 win and the point is "<<points<<".\n";
			else
				cout<<"Team-1 win and the point is "<<points<<".\n";
		}
	}
	else
		cout<<"Incomplete game.\n";

	totw=0,totr=0,totb=0,teamr=0,flag=true;
	}
	}
		
}
