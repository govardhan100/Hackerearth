#include <iostream>
using namespace std;
int GCD(int n,int m){
    if(n==1||m==1){return 1;}
    int temp_max=(n>m?n:m);
    int temp_min=(n>m?m:n);
    if(temp_max%temp_min==0){return temp_min;}
    return GCD(temp_min,temp_max%temp_min);
    
    
}
int main()
{
    int N;
    cin>>N;
    int A[100000];
    int B[100000];
    int temp=0;
    while(temp!=N){
        
        cin>>A[temp];
        temp++;
    }
    B[N-1]=GCD(A[N-1],A[N-2]);
    
    for(int i=N-1;i>=0;i--){
        B[i]=GCD(B[i],A[i]);
    }
    int max_=0,index;
    if(N==2){cout<<0<<endl;return 0;}
    for(int i=N-2;i>=0;i--)
    {
    if(max_<=B[i]){
        max_=B[i];
        index=i;
    }    
    
    }
    cout<<N-index<<endl;

    return 0;
}

