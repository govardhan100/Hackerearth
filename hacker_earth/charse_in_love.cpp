#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;


void  calc(vector<int>&a){
 for(int i=1;i<45001;i++)
	{
		a.push_back((i*(i+1))/2);
	
	}

}
bool linear_search(int l,int r,int total_sum,vector<int>&a)
{
	//cout<<"l:"<<l<<"R:"<<r<<"K:"<<a[l]+a[r]<<endl;
	//int temp;
	//cin>>temp;
	if(l>r){return false;}
	if((a[l]+a[r])==total_sum){
		return true;
		}
	if((a[l]+a[r])>total_sum){
		r=r-1;		
		}
	else{l=l+1;}
	return linear_search(l,r,total_sum,a);
	
}


int main()
{
	vector<int>a;
	calc(a);
	int n;
	cin>>n;
	//cout<<"size"<<a.size()<<endl;
	if(linear_search(0,a.size()-1,n,a)){cout<<"YES"<<endl;}
	else{cout<<"NO"<<endl;}	
	return 0;

	}





