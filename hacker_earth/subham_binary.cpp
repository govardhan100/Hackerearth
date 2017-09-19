#include <iostream>
#include<string>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int t;
    string a;
    cin>>t;
    int l;
    while(t--){
        cin>>l;
        cin>>a;
        int count;
        count=0;
        for(int i=0;i<a.size();i++){if(a[i]=='0'){count++;}}
        cout<<count<<endl;
        
    }
    
    return 0;
}

