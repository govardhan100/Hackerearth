#include<iostream>
using namespace std;


int main()
{

	int *A=new int[100000],N,X;
	cin>>N>>X;
	int temp=0;
	while(temp!=N){cin>>A[temp];temp++;}
		int count=0;
		temp=0;
		int var=0;
	while(temp!=N){
		
		if(count==2){break;}
		if(A[temp]<=X){var++;}				
		if(A[temp]>X){count++;}	
		temp++;
	}
	cout<<var<<endl;

	return 0;
	}
