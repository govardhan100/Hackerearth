#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    string s1="hackerrank";
    
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        int count=0,current=0;
        cin >> s;
        for(int i=0;i<s.size();i++)
        {
            if(s1.size()==current){break;}
            if(s[i]==s1[current]){current++;continue;}
            
            
        }
        if(current==s1.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}

