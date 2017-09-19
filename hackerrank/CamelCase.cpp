#include<iostream>
#include<vector>
using namespace std;

int main()
{


	string s;
	cin>>s;
	vector<int>a;
	for(int i=0;i<s.size();i++)
	{
		if('a'<=s[i] && s[i]<='z'){continue;}
		else
		{
			a.push_back(i);
		}	
	}
	//int current=0;
	
	//cout<<s.substr(current,s.size()-current)<<endl;
	cout<<a.size()+1<<endl;

	return 0;

}
