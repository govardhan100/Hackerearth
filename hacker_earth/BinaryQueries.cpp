#include<iostream>
using namespace std;
void check_odd(int *A,int n)
{
//cout<<"here is"<<n-1<<endl;
if(A[n-1]==1){cout<<"ODD"<<endl;}
else{cout<<"EVEN"<<endl;}
}

void flip(int *A,int n)
{
if(A[n-1]==0){A[n-1]=1;}
else{A[n-1]=0;}
//cout<<A[0]<<" "<<A[1]<<endl;
//for(int i=0;i<5;i++){cout<<A[i]<<" ";}
//while(temp--){cout<<A[N-temp+1]<<" ";}
return;

}
int main()
{
int N,Q;
int A[1000001];
cin>>N>>Q;
int temp=N;
int var=0;
while(temp--){cin>>A[var];var++;}
temp=N;
//while(temp--){cout<<A[N-temp+1]<<" ";}
//cout<<"Q"<<Q<<endl;
int L,R,ind;

while(Q--){
cin>>ind;
if(ind==1){
	cin>>L;
	flip(A,L);
	}
else{
	cin>>L>>R;
	check_odd(A,L);	
	}
}


//for(int i=0;i<N;i++){cout<<A[i]<<" ";}
//while(temp--){cout<<A[N-temp+1]<<" ";}
return 0;

}
