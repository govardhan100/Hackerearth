
#include<iostream>
using namespace std;
int A[]={1,12,2,11,3,10,4,9,5,8,6,7};
char sheet[]={'W','W','M','M','A','A','A','A','M','M','W','W'};
int calculate(int i){

if(i%2==0){return i+1;}
else{return i-1;}

}
int search(int n)
{
for(int i=0;i<12;i++){
	if(A[i]==n){return i;} 
	}
}
int main()
{

int T,N;
cin>>T;
while(T--){
	cin>>N;
	//N=T;
	int rem=N%12;
	int dev=N/12;
	int actual=(rem==0)?12:rem;
	//cout<<"T:"<<T<<" "<<"actual"<<actual<<endl;
	int search_value=search(actual);
	//cout<<"index:"<<search_value<<" "<<"actual"<<actual<<endl;
	int opposite=calculate(search_value);
	//cout<<"actual opposite:"<<A[opposite]<<" number "<<N<<" search:"<<search_value<<endl;
	if(rem==0){
	cout<<A[opposite]+(12*(dev-1))<<" "<<sheet[opposite]<<"S"<<endl;		
	}
	else{
	cout<<A[opposite]+(12*(dev))<<" "<<sheet[opposite]<<"S"<<endl;	
}
}}
