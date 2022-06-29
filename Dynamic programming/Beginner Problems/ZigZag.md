
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
	
	int postive = 0, negative=0;
	
	// Doble ciclo for
	// El primero recorre todo
	for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	            {
	                // Negativo
	                if( ((v[i] - v[j]) < 0) && ((postive==0 && negative==0) || (postive==1 && negative==0)) )
	                    {
	                        if(dp[j]+1 > dp[i])
	                            {
	                                dp[i] = dp[j]+1;
	                                postive=0;
	                                negative=1;
	                            }
	                    }
	                
	                // Positivo
	                if( ((v[i] - v[j]) > 0) && ((postive==0 && negative==0) || (postive==0 && negative==1)) )
	                    {
	                        if(dp[j]+1 > dp[i])
	                            {
	                                dp[i] = dp[j]+1;
	                                postive=1;
	                                negative=0;
	                            }
	                    }
	                
	            }
	    }
	
	cout<<dp[n-1];
	return 0;
}
```
