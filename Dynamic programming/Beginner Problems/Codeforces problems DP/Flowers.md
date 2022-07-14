```c++
#include <bits/stdc++.h>
using namespace std;


long long t,k;
long long a,b;

vector<long long> suma(100000+1,-1);
vector<long long> dp(100000+1,-1);


int main() {
    
    cin>>t>>k;
    long long mayor=-1;
    
    vector<pair<long long, long long>> sol;
    
    // Input
    for(int i=0;i<t;i++)
        {
              cin>>a>>b;
              sol.push_back(make_pair(a,b));
              
              if(mayor<b)   mayor = b;
        }
    
    // Caso base
    dp[0]=0;
    for(int i=1;i<k;i++)
        {
            dp[i] = 1;
        }
    
        
    dp[k] = 2;
    
    
            // DP
            for(long long i=k+1;i<=mayor;i++)
                {
                    if(i-k>=0)
                        { 
                            dp[i] = dp[i-k]+dp[i-1];
                            dp[i]%=1000000007;
                        }
                   
                }
        
    
    //for(int i=0;i<=mayor;i++)    cout<<dp[i]<<" "; // Check vector 
	
	// Prefix sums:
	suma[0] = 0;
	for(long long i=1;i<=mayor;i++) suma[i] = suma[i-1] + dp[i];
	
	// Ans:
	
	
	//0 1 3 6 11
	// 6 - 0  = 6
	// 6 - 1 = 5
	// 11 - 6 = 5    ans =  
	long long ans = 0;
	for(auto it: sol)
	    {
	        ans = suma[it.second] - suma[it.first - 1];
	        ans%=1000000007;
	        cout<<ans<<endl;
	    }
	
	return 0;
}
```
