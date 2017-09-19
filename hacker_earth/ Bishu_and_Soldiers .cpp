#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int* a,int &l,int &r,int key){
	int m=l+((r-l)/2);
	if(r<l){return -1;}
	if(a[m]==key){
	l=m+1;
	//cout<<"R: "<<r<<"l:"<<l<<endl;
	while(binary_search(a,l,r,key)!=-1){
	l++;
	}
	l--;
	return l;

	}

	if(a[m]>key){r=m-1;}
	else{l=m+1;}
	return binary_search(a,l,r,key);

}
int main()
{

	int A[10001]={0};
	int B[10001]={0};
	int t;
	cin>>t;
	int temp=0;
	for(int i=0;i<t;i++){
	cin>>A[i];
	}
	sort(A,A+t);
	int past=0;
	for(int i=0;i<t;i++){B[i]=(past+A[i]);past=B[i];}
	int Q;
	cin>>Q;
	while(Q--){
	cin>>temp;
	int l=0;
	int r=t-1;
	binary_search(A,l,r,temp);
	//cout<<"L:"<<l<<endl;
	if(A[l]==temp){cout<<l+1<<" "<<B[l]<<endl;}
	else{cout<<l<<" "<<B[l-1]<<endl;}
	
	}

	return 0;

	}

