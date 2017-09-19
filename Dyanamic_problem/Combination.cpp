#include<iostream>
using namespace std;
unsigned long long int A[10000];

int main()
{
	int A[10][10]={0};
	for(int i=0;i<10;i++){
		A[i][i]=1;
		A[i][0]=1;
		}

	for(int i=2;i<10;i++){

		for(int j=1;j<i;j++)
		{
		A[i][j]=A[i-1][j-1]+A[i-1][j];
		cout<<"n: "<<i<<" "<<"j: "<<j<<" C:"<<A[i][j]<<" "<<endl;					
		
		}
	
	}	


	
	return 0;}
