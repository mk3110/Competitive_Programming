#include <bits/stdc++.h>
using namespace std;

const int siz=5e4+5;
int arr[siz];

struct node{
	int mxleft;
	int mxright;
	int mxinrange;
	int total;
};

node tree[siz*2];

int maxim(int x,int y){
	int m=max(x,y);
	return m;
}

int maxi(int x,int y,int z){
	int m=max(max(x,y),z);
	return m;
}

void constructtree(int low,int high,int pos){	
	if(low==high){
		tree[pos].mxleft=arr[low];
		tree[pos].mxright=arr[low];
		tree[pos].mxinrange=arr[low];
		tree[pos].total=arr[low];	
		return ; 
	}
	int mid=(low+high)/2;
	int left=2*pos+1;
	int right=2*pos+2;
	constructtree(low,mid,left);
	constructtree(mid+1,high,right);
	tree[pos].total=tree[left].total+tree[right].total;
	tree[pos].mxright=maxim(tree[right].mxright,tree[right].total+tree[left].mxright);
	tree[pos].mxleft=maxim(tree[left].mxleft,tree[left].total+tree[right].mxleft);
	tree[pos].mxinrange=maxi(tree[left].mxinrange,tree[right].mxinrange,tree[left].mxright+tree[right].mxleft);
}

int getmx(int startrange,int endrange,int low,int high,int pos){
	if(startrange>high||endrange<low||low>high)
		return 0;
	else if(startrange<=low&&endrange>=high)
		return tree[pos].mxinrange;
	int mid=(low+high)/2;
	int left=2*pos+1;
        int right=2*pos+2;
	int sum1=getmx(startrange,endrange,low,mid+1,left);
	int sum2=getmx(startrange,endrange,mid+1,high,right);
	return (sum1+sum2);	
}
		
int main(){
	int num;
	scanf("%d",&num);
   	for(int i=0;i<num;i++)
		scanf("%d",&arr[i]);
	constructtree(0,num-1,0);
	int query;
	scanf("%d",&query);
	int startrange,endrange;
	int ans=0;
	for(int i=0;i<query;i++){
		scanf("%d%d",&startrange,&endrange);
		ans=getmx(startrange-1,endrange-1,0,num-1,0);
		printf("%d\n",ans);
	}	
	return 0;
}

