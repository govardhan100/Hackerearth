#include<iostream>
#include<climits>
using namespace std;
int main()
{

int T,N,K;
cin>>T;
//cout<<"T:"<<T;
int A[100000];
while(T--){
	cin>>N>>K;
	//cout<<N<<" :"<<K;
	int temp=0;
	int min_value=INT_MAX;
	while(temp!=N){cin>>A[temp];
	//cout<<"min_value"<<min_value<<endl;
	temp++;
	}
	for(int i=0;i<N;i++){if(min_value>A[i]){min_value=A[i];}}
	temp=min_value>=K?0:K-min_value;
	cout<<temp<<endl;
}
return 0;	
}

