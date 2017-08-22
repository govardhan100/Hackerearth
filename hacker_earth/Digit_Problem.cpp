
#include<iostream>
using namespace std;
int main()
{
string s;
int n;
cin>>s>>n;
int count_n=0;
int count_len=0;
while(true)
{
	if((count_n==n )|| (count_len==s.size())){
	break;
	}
	if(s[count_len]=='9'){
	count_len++;
	continue;	
	}
	else{
		s[count_len]='9';
		count_len++;
		count_n++;
	}
	
	
	
	

}
cout<<s<<endl;
	
}
