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
	for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	            {
	                
	            }
	    }
	
	return 0;
}
```
