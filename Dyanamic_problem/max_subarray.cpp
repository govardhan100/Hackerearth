#include<iostream>
using namespace std;
int max_subarray(int *A,int n){
	int max_so_far=A[0];
	int accumulator=0;
	for(int i=0;i<n;i++){
		accumulator+=A[i];
		if(accumulator>max_so_far){
		max_so_far=accumulator;
		}
		if(accumulator<0){
		accumulator=0;	
			
		}
		}
return max_so_far;
}
int main()
{
    int a[1000] ;//= {-2, -3, 4, -1, -2, 1, 5, -3};
    int n ;// sizeof(a)/sizeof(a[0
    cin>>n;
    while(n--){
    int t;
    cin>>t;
    int temp=0;
    while(temp!=t){
        cin>>a[temp];
        temp++;
    }
    cout<<max_subarray(a,t)<<endl;
    
    }
    
return 0;}
