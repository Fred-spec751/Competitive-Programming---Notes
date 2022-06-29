<h1 align="center">Minimum number of coins</h1>
<p>
  <h3>Problema</h3>
  
</p>

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n,e; cin>>n>>e;
	
	// Parte de grafo
	vector<vector<int>> lista(e+1);
	int u,v;
	
	for(int i=0;i<n;i++)
	    {
	        cin>>u>>v;
	        lista[u].push_back(v);
	    }
	
	// Dp
	// El caso base sería iniciar desde el vértice 1
    	vector<vector<int>> dp(n+1);
	dp[1]
	
	for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	            {
	                for(int k=0;k<n;k++)
        	            {
        	                // Entre todos los vértices adyacentes se toma el que tiene el camino más corto.
        	                
        	            }
	            }
	    }
	
	return 0;
}

```
