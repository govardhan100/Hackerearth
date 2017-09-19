#include <iostream>
using namespace std;

int main()
{
   int N;
   int *A=new int(10);
   int *B=new int(10);
   cin>>N;
   int temp=0;
   while(temp!=N){cin>>*(A+temp);temp++;}
   temp=0;
   while(temp!=N){cin>>*(B+temp);temp++;}
   for(int i=0;i<N-1;i++){
       for(int j=i+1;j<N;j++)
       {
           if(A[i]>A[j]){
               temp=A[i];
               A[i]=A[j];
               A[j]=temp;
           }
           if(B[i]>B[j]){temp=B[i];
               B[i]=B[j];
               B[j]=temp;
           }
       }
       
   }
   
for(int i=0;i<N;i++){
	if(A[i]<B[i]){cout<<"No"<<endl;return 0;}
}
cout<<"Yes"<<endl;
    return 0;
    
}

