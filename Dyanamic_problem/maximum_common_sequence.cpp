#include<iostream>
#include<string>
#include<cmath>
using namespace std;
unsigned long long int A[10000];

int main()
{

string a="AGGTAB";
string b= "GXTXAYB";
int a_len,b_len;
a_len=a.length();
b_len=b.length();
int A[a_len+1][b_len+1]={0};
for(int i=1;i<=a_len;i++){
	for(int j=1;j<=b_len;j++){
		if(a[i-1]==b[j-1]){
			A[i][j]=1+A[i-1][j-1];			
			
		}		
		else{
			A[i][j]=max(A[i-1][j],A[i][j-1]);	
		}
			
	}
	
	}
cout<<A[a_len][b_len]<<endl;





	
	return 0;}
