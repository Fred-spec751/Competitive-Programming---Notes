<h1 align="center">Longest Non-decreasing Sequence</h1>
<p>
  <h3>Problema</h3>
  Dado una secuencia de números aleatorios encontrar la subsecuencia no decreciente (creciente) más larga.
  
  <h3>Interpretación</h3>
  Lo que se tiene será una secuencia de números de forma aleatoria, donde tenemos que encontrar una subsecuencia creciente la cual no necesariamente deberá de ser continua, por lo cual se puede decir que de la secuencia: 1 2 1 4, la subsecuencia no decreciente más larga es 1 2 4.
  
  
  Entonces 
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
