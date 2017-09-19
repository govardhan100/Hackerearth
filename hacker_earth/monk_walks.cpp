#include <iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int T;
    cin>>T;
    while(T--){
        int k=0;
        cin>>a;
        int count=0;
        for(int i=0;i<a.length();i++){
            bool a1=(tolower(a[i]))=='a';
            bool a2=(tolower(a[i]))=='e';
            bool a3=(tolower(a[i]))=='i';
            bool a4=(tolower(a[i]))=='o';
            bool a5=(tolower(a[i]))=='u';
            
          if(a1||a2||a3||a4||a5){
             count++;
          }
          
        }
        cout<<count<<endl;
    }
    return 0;
}

