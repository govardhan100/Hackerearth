#include<iostream>
#include<string>
using namespace std;
int main()
{
int t;
string a;
cin>>t;
while(t--){
	cin>>a;
	char A[26];
	int b[26]={0};
	for(int i=0;i<26;i++){A[i]=0;b[i]=0;}
	 int count=1;	
	for(int i=0;i<a.length();i++){
		int temp=a[i]-'a';
		if(b[temp]==0){A[count-1]=a[i];b[temp]=count;count++;}
	
	}
	cout<<b<<endl;



}


return 0;}
