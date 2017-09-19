#include <bits/stdc++.h>

using namespace std;
bool compare(int i,int j){return i<j;}
int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
	int A[6]={0};
	for(int i=0;i<n;i++)
	{
	A[ar.at(i)]+=1;	
	}
	int max_count=-1,id;
	for(int i=1;i<6;i++){
		if(A[i]>max_count)
		{
		max_count=A[i];
		id=i;
		}
	}

return id;}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

