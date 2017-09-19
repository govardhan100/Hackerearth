#include <bits/stdc++.h>
using namespace std;
//int A[10000000];
int birthdayCakeCandles(int n, vector <int> ar) {
    int max_count=0;
    int max_element=-1;
    for(int i=0;i<ar.size();i++)
    {
        if(max_element<ar.at(i))
        {
            max_element=ar.at(i);
            max_count=1;
            continue;
        }    
        if(max_element==ar.at(i)){max_count+=1;continue;}
        
    }
    return max_count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

