#include<iostream>
using namespace std;
unsigned long long int A[10000];
int fib(int n){
	A[0]=0;
	A[1]=1;	
	for(int i=2;i<=n;i++){
			A[i]=A[i-1]+A[i-2];

	
	}
return A[n];
}
int main()
{
int a;
cout<<"enter the number for fib"<<endl;
//cin>>a;
fib(10);
for(int i=0;i<10;i++){
cout<<A[i]<<endl;
}
return 0;}
