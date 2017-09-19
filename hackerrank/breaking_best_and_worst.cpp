#include <bits/stdc++.h>

using namespace std;
int hcf(int a,int b)
{
    if(a==1||b==1){return 1;}
    if(a%b==0){return b;}
    return hcf(b,a%b);
}
int lcm(int a,int b)
{
int i;
for(i=a;i<=a*b;i++)
{
if(i%a==0 && i%b==0){return i;}
}
return --i;
}
int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
	int temp_hcf,temp_lcm;
	if(a.size()>=1){temp_lcm=a[0];}
	if(b.size()>=1){temp_hcf=b[0];}

	for(int i=0;i<a.size();i++)
	{
	temp_lcm=lcm(a[i],temp_lcm);
	
	}

	//cout<<"LCM"<<temp_lcm<<endl;

	for(int i=0;i<b.size();i++){
		int v1,v2;
		if(temp_hcf>b[i]){
			v1=temp_hcf;
			v2=b[i];		
		}
		else{
				v2=temp_hcf;
				v1=b[i];			
		}		
		temp_hcf=hcf(v1,v2);
	}
	//cout<<"hcf"<<temp_hcf<<endl;
	if(temp_hcf<temp_lcm){return 0;}
	int i;
	int count=0;
	for(i=temp_lcm;i<=temp_hcf;i=i+temp_lcm){
		if(temp_hcf%i==0){count++;}
		}
	
	return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

