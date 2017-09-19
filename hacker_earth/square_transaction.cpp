#include <iostream>
using namespace std;
int binary_search(int *A,int &l,int &r,int element)
{
	int m=l+((r-l)/2);
	if(A[m]==element){l=m;r=m;return element;}
	if(l>r){return -1;}
	if(A[m]>element){
	r=m-1;	
	}
	else{
	l=m+1;	
	}
	return binary_search(A,l,r,element);
}


int main(){
int A[100001]={0};
int t;
cin>>t;
int temp=0;
int past=0,n=t;
for(int i=0;i<n;i++)
{
cin>>temp;
A[i]=temp+past;
past=A[i];
}
//for(int i=0;i<n;i++){cout<<"A:"<<A[i]<<endl;}
int Q,p;
cin>>Q;
while(Q--){
cin>>p;
int l=0;
int r=n-1;
int element=p;
int k=binary_search(A,l,r,element);
if(l>=n){cout<<"-1"<<endl;}
else{cout<<l+1<<endl;}




}



return 0;
}

