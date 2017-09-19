#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
bool myfunction(int i,int j){return i>j;}
int binary_search(vector<int>&a,int &l,int &r,int element){
	while(l<=r){
		int m=l+(r-l)/2;
		//cout<<"M:"<<m<<endl;		
		if(a[m]==element){return m;}
		if(a[m]>element){l=m+1;continue;}
		else{r=m-1;continue;}
		
	}

return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> scores(n);
	vector<int> ranking;
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    // your code goes here
	sort(scores.begin(),scores.end(),myfunction);
	ranking.push_back(scores[0]);
	int last_ranking=scores[0];
	for(int i=0;i<scores.size();i++){
		if(last_ranking!=scores[i]){
			ranking.push_back(scores[i]);
			last_ranking=scores[i];
		}
	}
	
	//cout<<ranking.size()<<endl;
	for(int i=0;i<alice.size();i++){
	//cout<<"H:"<<ranking.at(i)<<endl;
	int l=0;
	int r=ranking.size()-1;
	int temp=binary_search(ranking,l,r,alice[i]);
	//cout<<"search:"<<ranking[i]<<": rank:"<<temp+1<<" L:"<<l<<"R:"<<r<<endl;		
	if(temp==-1){cout<<l+1<<endl;}
	else{cout<<temp+1<<endl;}	
	}


    return 0;
}



