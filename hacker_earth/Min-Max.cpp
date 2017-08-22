#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void find_index(bool *A,int &left,int &right)
{
bool indicator_left=true,indicator_right=true;
for(int i=0;i<101;i++)
{
	if(A[i]==true && indicator_left)
	{
	left=i;
	indicator_left=false;		
	}
	if(A[100-i]==true && indicator_right)
	{
	right=100-i;
	indicator_right=false;		
	}
}


}



int main()
{

bool A[101]={false};
int N;
cin>>N;
int temp;
while(N--)
	{
		cin>>temp;
		A[temp]=true;
	
	}
	int right=0,left=0;
	find_index(A,left,right);
	for(int i=left;i<=right;i++)
	{
	if(A[i]==false){cout<<"NO"<<endl;return 0;}
	}
cout<<"Yes"<<endl;
return 0;
}
