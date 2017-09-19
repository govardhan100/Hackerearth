
#include <iostream>
#include <algorithm>

#include<stack>
using namespace std;
int save[37];

int stair_case(int n){
	
    if(n==0){return save[0];}
    if(n==1){return save[1];}
    if(n==2){return save[2];}
    if(n==3){return save[3];}
	 if(save[n]!=0){return save[n];}
	 int temp=stair_case(n-3)+stair_case(n-2)+stair_case(n-1);
	 save[n]=temp;
	 return save[n];
}

int main(){
    int s;
    cin >> s;
	 save[1]=1;
	save[2]=2;
	save[3]=4;
    for(int a0 = 0; a0 < s; a0++){
        int n;
        cin >> n;
        cout<<stair_case(n)<<endl;
    }
    return 0;
}

