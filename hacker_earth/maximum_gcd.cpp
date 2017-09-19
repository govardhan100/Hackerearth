#include <iostream>
#include<cmath>
using namespace std;
int gcd(int n,int m){
    if(n==1||m==1){return 1;}
    int temp_max=(n>m?n:m);
    int temp_min=(n>m?m:n);
    if(temp_max%temp_min==0){return temp_min;}
    return gcd(temp_min,temp_max%temp_min);
    
    
}
int main()
{
    int A[1000];
	int n,current;	
	cin>>n;
	for(int i=0;i<n;i++){cin>>A[i];}
	current=A[n-1];
	int i=n-1;
	for(;i>=0;i--){
	int temp=gcd(current,A[i]);
	//cout<<"gcd:"<<temp<<endl;
	if(current>temp){break;}	
		
	}
	cout<<i+1<<endl;

    return 0;
}

