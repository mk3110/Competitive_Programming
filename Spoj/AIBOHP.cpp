#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int findLCS(string str,string revstr){
	int string_length1=str.size()+1;
	int string_length2=revstr.size()+1;
	int table[string_length1][string_length2];
	for(int i=0;i<string_length1;i++){
		table[i][0]=0;
	}
	for(int i=0;i<string_length2;i++){
		table[0][i]=0;
	}
	for(int i=1;i<string_length1;i++){
		for(int j=1;j<string_length2;j++){
			if(str[i-1]==revstr[j-1])
				table[i][j]=table[i-1][j-1]+1;
			else
				table[i][j]=max(table[i-1][j],table[i][j-1]);
		}
	}
	return table[string_length1-1][string_length2-1];
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string str1,str2;
		cin>>str1;
		str2=str1;
		reverse(str2.begin(),str2.end());
		int string_length=str1.size();
		cout<<string_length-findLCS(str1,str2)<<endl;
	}
	return 0;
}