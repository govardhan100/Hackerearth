#include <bits/stdc++.h>

using namespace std;

long theGreatXor(long x){
    // Complete this function
    int count=0;
    long Y=1;
    long var=x;
    while(x){
        if(x!=0){
            count++;Y=Y<<1;
            Y++;    
            //cout<<"Y:"<<Y<<endl;
                }
        x=x>>1;
    }
    Y=Y>>1;
    //cout<<"final Y:"<<Y<<endl;
    if(count==0){return 1;}
    return (Y)-var;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long x;
        cin >> x;
        long result = theGreatXor(x);
        cout << result << endl;
    }
    return 0;
}

