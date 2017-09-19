#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{

	string s;
	int N;
	int A[27]={0};
	cin>>s;
	vector<int>P;
	//cin>>N;
	N=s.size();
	int past=0;
	for(int i=1;i<N;i++)
	{
				if(s[i]==s[past])
				{
					int temp=s[i]-'a'+1;	
					int k=i-past+1;
					A[temp]=max(A[temp],k);		
					continue;			
				}		
				else{
						int temp=s[past]-'a'+1;
						int temp1=s[i]-'a'+1;
						//cout<<"A:"<<temp<<endl;
						int k=i-past;
						A[temp]=max(A[temp],k);
						A[temp1]=max(A[temp1],1);
						
						past=i;
					}

	}
	if(s.size()==1)
	{
	int l=s[i]-'a'+1;
	A[l]=1;	
	}
	
	for(int i=1;i<27;i++)
	{
	char a='a'-1+i;
	cout<<a<<":"<<A[i]<<endl;			
	}
	int var;
	int T;
	cin>>T;
	while(T--){
		cin>>var;
		bool indicator=false;
		for(int i=1;i<27;i++)
		{
			if(A[i]==0){continue;}
			if(A[var]!=0 && var<27){indicator=true;break;}
			int temp1=var/i;
			int temp2=var%i;
			if(temp2==0 && temp1<=A[i]){indicator=true;break;}
		


		}
	if(indicator){cout<<"Yes"<<endl;}
	else{cout<<"No"<<endl;}

	}
	





return 0;
}
