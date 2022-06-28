<h1 align="center">Longest Non-decreasing Sequence</h1>
<p>
  <h3>Problema</h3>
  
</p>


```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	vector<int> v(n);
	
	// Parte de almacenamiento
	for(int i=0; i<n;i++)
	    {
	        cin>>v[i];
	    }
	
	// Parte de DP
	vector<int> dp(n,1);
	int maximo = 0;
	
	// Doble ciclo for
	// El primero recorre todo
	for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	            {
	                if(v[j] <= v[i])
	                    {
	                        if(dp[j]+1 > dp[i])
	                            {
	                                dp[i] = dp[j]+1;
	                            }
	                    }
	            }
	    }
	
	cout<<dp[n-1];
	return 0;
}
```
