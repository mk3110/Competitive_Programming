#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	int c=0;
	while(test--){
		c++;
		int n;
		cin>>n;
		long long int inc=0,ex=0,temp=0,x=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x+ex>=inc){
				temp=inc;
				inc=x+ex;
				ex=temp;
			}
			else
				ex=inc;
		}
		cout<<"Case "<<c<<": "<<inc<<endl;
	}
	return 0;
}