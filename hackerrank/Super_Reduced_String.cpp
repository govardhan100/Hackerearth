#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this
    int count=1;
    if(s.length()==0){return "Empty String";}
    if(s.length()==1){return s;}
    if(s.length()==2)
	{
		string a=(s[0]==s[1])?"Empty String":s;
		return a;
	}
    string out;
    int current=0;
	while(true)
	{
	//cout<<s<<endl;
	int p=s.substr(current,s.length()).length();
	//cout<<"length:"<<p<<endl;
	if(p>1)
	{
		if(s[current]==s[current+1])
		{
			s.erase(current+1,1);
			s.erase(current,1);
			current=max(current-1,0);	
			//cout<<s<<endl;	
			continue;
		}	
		else
		{
		current++;	
		continue;	
		}
	}
	else
	{
		break;
	}



	}

    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
		if(result.length()!=0){
    		cout << result << endl;
		}
		else{cout<<"Empty String"<<endl;}
	    return 0;
}

