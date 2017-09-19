#include <iostream>
using namespace std;

int main()
{

int n;
int T;
cin>>T;

while(T--){
 cin>>n;  
int count=0;

while(n){
    
    if(n & 1){count++;}
    n=n>>1;
	//cout<<n<<endl;
    
}
cout<<count<<endl;}
return 0;
}

