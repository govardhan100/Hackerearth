#include <iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;


int main()
{
int K[]={67,71,73,79,83,89,97,101,103,107,109,113};

string S;
int n;
int l;
cin>>n;
for(int j=0;j<n;j++){
	cin>>l;
	cin>>S;
	for(int i=0;i<S.size();i++){
	
		int k=0;
		//cout<<S<<endl;
		while(K[k]<(int)S[i]){k++;}
		cout<<"value of  K:"<<k<<endl;
		if(k==12)
		{S[i]='q';continue;}
		if(k==0){S[i]='C';continue;}
		int diff=K[k]-S[i];
		if(diff!=0)
		{
		if(abs(diff)>=((int)S[i]-K[k-1]))
		{S[i]=char(K[k-1]);	}		
		else{
			S[i]=char(K[k]);		
		}

		}
	
		
	}
cout<<S<<endl;
}


    return 0;
}

