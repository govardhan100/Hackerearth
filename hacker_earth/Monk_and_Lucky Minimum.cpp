#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

	int N,T;
	unsigned long *A=new unsigned long[100000];
	scanf("%d",&T);
	while(T--){
	scanf("%d",&N);
	int temp=0,var;
	unsigned long min_Number=1000000001;
	bool indicator=false;
	temp=0;
	while(temp!=N){
	scanf("%d",&var);
	temp++;
	if(var%2==1){indicator=true;
	min_Number=min_Number>var?var:min_Number;
	A[var]++;		
	}
	
	
		
	}
	if(indicator==true)
	{
	if(A[min_Number]%2==1){cout<<"Lucky"<<endl;}
	else{cout<<"Unlucky"<<endl;}	
	}
	else{cout<<"Unlucky"<<endl;}

	}
	
return 0;}
