#include <bits/stdc++.h>
    using namespace std;

    int main()
    {
   
    int n, k;
	
    cin >> n >> k;
		double x[n],y[n];
		double dis[n];
    for (int i = 0; i < n; i++) {
    cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
    cin >> y[i];
    }
    for (int i = 0; i < n; i++) {
    dis[i] = x[i]*x[i] + y[i]*y[i];
    }
    sort(dis, dis + n);
    cout << ceil(sqrt(dis[k-1])) << endl;
    return 0;
    }
 
