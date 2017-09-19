






#include<iostream>
using namespace std;
void swap(unsigned long *A,int L,int R,int N){
	for(int i=L;i<=R;i++)
	{
	unsigned long temp=A[i];
	A[i]=A[N-1-i];
	A[N-1-i]=temp;
	}

}


void using_memory(bool *B,int L,int R,int N){
	for(int i=L;i<=R;i++){
		B[i]=!B[i];
		B[N-1-i]=!B[N-1-i];
	}

}

void third_method(int *A,int L,int R,int N)
{



}
int main()
{

	int N,R,L,Q;
	cin>>N;

	unsigned long *A=new unsigned long[N];
	bool* B=new bool[N];
	int temp=0;
	while(temp!=N){cin>>A[temp];temp++;}
	cin>>Q;
	while(Q--){

	cin>>L>>R;
	L--;R--;
	//swap(A,L,R,N);
	
	//using_memory(B,L,R,N);
	}
	temp=0;
	while(temp!=N){cout<<A[temp]<<" ";temp++;}
	
	

	cout<<"\n";
return 0;
}
