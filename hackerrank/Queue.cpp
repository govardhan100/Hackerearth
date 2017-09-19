#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> A,B;
		  int var1,var2;   
        void push(int x) {
			var1=A.size();
			for(int i=0;i<var1;i++)
			{
			B.push(A.top());
			A.pop();			
			}
			A.push(x);
			for(int i=0;i<var1;i++)
			{
				A.push(B.pop());
				B.pop();
			
			}
                  
        }

        void pop() {
             A.pop();
            
        }

        int front() {
                var2=A.top();
               return var2;
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

