#include<iostream>
#include<string>
using namespace std;
int main()
{

int *p=new(int[10]);
//int p[10]={0,0,0,0,0};
//for(int i=0;i<10;i++){cout<<p[i]<<endl;}
string N;
cin>>N;
//cout<<N<<"size:"<<N.size()<<endl;
//cin>>N;
for(int i=0;i<N.size();i++)
{
 int n=(char)N[i]-'0';
	//cout<<n<<endl;
	p[n]+=1;
}
for(int i=0;i<10;i++)
{
	cout<<i<<" "<<p[i]<<endl;
}
}
