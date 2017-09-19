#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    long long count_even,count_odd,n;
    while(t--){
        count_even=0;
        count_odd=0;
        cin>>n;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp%2==0)
            {
                count_even++;
            }
            else{count_odd++;}
            
        }
        cout<<count_even*count_odd<<endl;
        
        
        
    }
    return 0;
}

