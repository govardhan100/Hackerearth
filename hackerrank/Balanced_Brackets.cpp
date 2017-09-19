#include<iostream>
#include<stack>
using namespace std;

bool is_balanced(string expression) {
    stack<char>K;
	for(int i=0;i<expression.size();i++)
	{
		if(expression[i]=='{'|| expression[i]=='['||expression[i]=='('){
			//cout<<"pushing:"<<expression[i]<<endl;
			K.push(expression[i]);	continue;		
		}	
		else{
             if(K.size()==0){return false;}
			bool v1=(expression[i]=='}' && K.top()=='{');
			bool v2=(expression[i]==']' && K.top()=='[');
			bool v3=(expression[i]==')' && K.top()=='(');
			if(v1 ||v2||v3){
				K.pop();
				//cout<<"size:"<<K.size()<<endl;
				}
			else{return false;}
		
		}
	}
	if(K.size()>0){return false;}
    
    return true;
}
int main()
{
	int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
