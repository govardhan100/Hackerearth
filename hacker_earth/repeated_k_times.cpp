#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    long long int a[1000001];
    int T;
    cin>>T;
    long long count=0;
    int temp=0;
    long long min_element,max_element;
    while(temp!=T){
        cin>>a[temp];
        temp++;
        count+=a[temp-1];
        
    }
    max_element=a[0];
    min_element=a[0];
    for(int i=0;i<T;i++){
        if(a[i]>max_element){
            max_element=a[i];
        }
        if(a[i]<min_element){
            min_element=a[i];
        }
    }
    //cout<<count<<endl;
    
    cout<<count-max_element<<" "<<count-min_element<<endl;
    return 0;
}

