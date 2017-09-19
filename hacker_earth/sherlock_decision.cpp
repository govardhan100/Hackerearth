#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
	int t;
	int n,k,p;
	vector<int>B;
	int A[100000]={0};
	cin>>t;
	while(t--){
		cin>>n>>k>>p;
		A[0]=0;
		for(int i=1;i<=k;i++){cin>>A[i];}
		A[k+1]=n+1;
		sort(A,A+k+2);
		//for(int i=0;i<k+2;i++){cout<<A[i]<<endl;}
		int count=0;
		if(n<(p+k)){cout<<-1<<endl;continue;}
		for(int i=1;i<k+2;i++){
		int c=A[i]-A[i-1]-1;
		if(c-p<0){p=p-c;}
		else{cout<<A[i-1]+p<<endl;break;}
	
		}
			
	
	}




return 0;}
