#include<cmath>
#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    int Max_height=-1;
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
       Max_height=max(Max_height,height[height_i]);
    }
    // your code goes here
    if(Max_height>k){
        cout<<Max_height-k<<endl;
    }
    else{cout<<0<<endl;}
    return 0;
}

