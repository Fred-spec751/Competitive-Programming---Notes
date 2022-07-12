```c++
#include <bits/stdc++.h>
using namespace std;

// Es un problema de monedas modificado, ahora se ocupa el maximo y no el minimo, esto funciona debido a 
// que por lo menos habrá un corte correcto, así que no importa si hay más cortes, tan solo con uno correcto basta.

int main() {
    
    // user input
    int n; cin>>n;
    vector<int> coins(3);
    
    
    for(int i=0;i<3;i++)
        {
            cin>>coins[i];
        }
    
    // DP 
    vector<int> dp(n+1,-1e9);
    dp[0]=0;
    
    // First loop for coins value
    vector<vector<int>> limit(4000+5,vector<int>(4000+5,1));
    
    for(int i=1;i<=n;i++)
        {
            for(int j=0;j<3;j++)
                {
                    if(coins[j]<=i && (dp[i-coins[j]] + 1)>dp[i])
                        {
                            dp[i] = dp[i-coins[j]]+1;
                            //limit[coins[j]][i-coins[j]]--; && (limit[coins[j]][i-coins[j]]>=1)
                        }
                }
        }
        
    cout<<dp[n]<<endl;
	return 0;
}
```
