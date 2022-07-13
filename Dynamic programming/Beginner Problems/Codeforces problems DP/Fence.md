```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long t,k; cin>>t>>k;
    
    vector<long long> v(t+1);
    
    for(int i=0;i<t;i++)
        {
            cin>>v[i];
        }
    
    // DP
    vector<long long> dp(t+1);
    
    // Base case
    dp[0] = 0;


    // Pairs: 
    for(int i=1;i<=t;i++)
        {
            dp[i] = dp[i-1]+v[i-1];
        }
    
    //for(auto it: dp)    cout<<it<<" "; check vector
    
    vector<long long> sums;
    
    for(int i=0;i<dp.size();i++)    if(i-k>=0)  sums.push_back(dp[i] - dp[i-k]);
        
    
    long long minimum = 1e9;
    long long ans = 0;
    for(int i=0;i<sums.size();i++)
        {
            if(minimum>sums[i]) minimum=sums[i], ans=i+1;
        }
    
    cout<<ans<<endl;
    
	return 0;
}
```
