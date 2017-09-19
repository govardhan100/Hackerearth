#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

//vector<int>A(10001);
int A[10000]={0};
int Q,N;
scanf("%d",&N);
int var;
while(N--){scanf("%d",&var);++A[var];}
cin>>Q;
//temp=0;
while(Q--){
	scanf("%d",&var);
	if(A[var]==0){printf("NOT PRESENT\n");}
	else{printf("%d\n",A[var]);}
	}
return 0;}
