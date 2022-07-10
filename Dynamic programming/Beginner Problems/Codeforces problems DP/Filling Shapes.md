```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    // INPUT
	int n; cin>>n;
	
	// Parte de DP
	vector<int> dp(n+1);
	
	// Caso base
	dp[1] = 0;
	dp[2] = 2;
	
	// Iteración
	if(n%2!=0) cout<<"0"<<endl;
	else
	    {
	        for(int i=3;i<=n;i++)
	            {
	                dp[i] = 2*dp[i-2];
	            }
	    
	        cout<<dp[n]; // Index in 0
	    }
	
	
	return 0;
}

```
