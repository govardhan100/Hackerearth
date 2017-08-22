#include<iostream>
using namespace std;
int main()
{
unsigned long int Q,N,L,R;
cin>>N>>Q;
//cout<<"N:"<<N<<"Q:"<<Q<<endl;
unsigned long  *A=new unsigned long [N];
unsigned long *cumulative=new unsigned long [N+1];

cumulative[0]=0;
//cout<<"zero value"<<cumulative[0]<<endl;
//for(int i=0;i<N+1;i++){cout<<i<<" :"<<cumulative[i]<<endl;}
for(int i=0;i<N+1;i++){cumulative[i]=0;}
for( int i=0;i<N;i++)
{
cin>>A[i];
cumulative[i+1]=A[i]+cumulative[i];


}
//for(int i=0;i<N;i++){cout<<"here is all:"<<A[i]<<endl;}
cout<<"\n"<<endl;
//for(int i=0;i<N+1;i++){cout<<i<<" :"<<cumulative[i]<<endl;}
for(unsigned long int i=0;i<Q;i++)
{
//cout<<"hi";
cin>>L>>R;

unsigned long long int temp=cumulative[R]-cumulative[L]+A[L-1];
cout<<temp/(R-L+1)<<endl;
}
	return 0;

}
