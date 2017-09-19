#include <iostream>
using namespace std;
int A[100000];
int binaray_search(int *a,int &l,int &r,int key){
	int m=l+((l-r)/2);
	if(a[m]==key){return m;}
	if(a[m]>key){r=m-1;}
	else{l=m+1;}
	return binaray_search(a,l,r,key);
}



int main()
{
	int t;
	int Q;
	cin>>t;
	for(int i=0;i<t;i++){cin>>A[i];}
	cin>>Q;
	int temp;
	while(Q--){
	cin>>temp;
	int l=0;
	int r=t-1;
	cout<<binary_search(A,l,r,temp)<<endl;
		
	}
    return 0;
}

