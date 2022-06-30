<h1 align="center">ZigZag – 2003 TCCC Semifinals 3</h1>
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
	vector<vector<int>> dp(n+1,vector<int>(n+1,0));    // Se necesita considerar tanto el positivo como negativo
	int maximo = 0;
	
	// Casos base: tener inicializado cuando es positivo y negativo
	dp[0][0] = 1; // positivo
	dp[0][1] = 1; // negativo
	
	
	// Doble ciclo for
	// El primero recorre todo
	for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	            {
	                // Negativo
	                if( ((v[i] - v[j]) < 0)  )
	                    {
	                        if((dp[j][0]+1 > dp[i][1]))   // Se añade al positivo uno negativo
	                            {
	                                dp[i][1] = dp[j][0]+1;    // En caso de que aumentó se actualiza
	                            }
	                    }
	                
	                // Positivo
	                if( ((v[i] - v[j]) > 0) )
	                    {
	                        if((dp[j][1]+1 > dp[i][0]) )
	                            {
	                                dp[i][0] = dp[j][1]+1;
	                            }
	                    }
	                    
	                
	            }
            maximo =  max(maximo,max(dp[i][0],dp[i][1]));  
	    }
	
	cout<<maximo;
	return 0;
}

```
