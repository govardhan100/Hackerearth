#include <iostream>
#include<string>
using namespace std;

int main()
{


int t;
unsigned long long int a;
unsigned long long int b;
cin>>t;
while(t--){
    cin>>a>>b;
    //if(b-a=1){cout<<a&b<<endl; continue;}
    if((b-a+1)<3){
	unsigned long long int c=a&b;
	cout<<c<<endl;continue;}
    if(b%2==0){
       // cout<<b-1<<b-2<<endl;
        b=(b-1)&(b-2);
        
        cout<<b<<endl;continue;}
    
    b=b&(b-1);
    
    cout<<b<<endl;
    
    
    
}
    return 0;
}

