#include<iostream>
using namespace std;
int hcf(int,int);
int hcf(int a,int b){
if(a==1||b==1)
{return 1;}
if(a%b==0){return b;}
return hcf(b,a%b);

}
int main()
{
int a=4,b=36;
int k=hcf(b,a);
a=a/k;
b=b/k;
cout<<a<<"/"<<b<<endl;


}
