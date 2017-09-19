
#include <iostream>
#include <algorithm>

#include<cmath>
using namespace std;

int number_needed(string a, string b) {
   int A[256]={0};
	int B[256]={0};
	for(int i=0;i<max(a.length(),b.length());i++)
	{
		if(i<a.length())
		{
			A[(int)a[i]]+=1;					
		}
		if(i<b.length())
		{
			B[(int)b[i]]+=1;		
		}
	}
	int count=0;	
	for(int i=0;i<256;i++){
		count=count+abs(A[i]-B[i]);
		}
return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

