#include<iostream>
using namespace std;
int main()
{
int T,N,K;
int *A=new int[100001];

cin>>T;
while(T--){
	cin>>N>>K;
	int temp=0,var;
	while(temp!=N){
	cin>>A[temp];
	temp++;
	}


for(int i=0;i<N;i++){
	var=(N-K)+i;
	cout<<A[(var)%N]<<" ";	
	} 
	cout<<"\n";
}
return 0;
}
