```c++
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t; cin>>t;
    
    vector<long long> dp(1200000+4,-1);
    
    // Case base 
    dp[2020] = 1;
    dp[2021] = 1;
    dp[0] = 1;      
    
    // Generating all sums with dp
    for(long long i=2020;i<=1100000+2;i++)
        {
            if(dp[i-2020] == 1)
                {
                    dp[i] = 1;
                }
            
            if(dp[i-2021] == 1)
                {
                    
                    dp[i] = 1;
                }
        }
    
    for(long long i=2021;i<=1100000+2;i++)
        {
            if(dp[i-2020] == 1)
                {
                    dp[i] = 1;
                }
            
            if(dp[i-2021] == 1)
                {
                    dp[i] = 1;
                }
        }
    
    
    long long q;
    
    for(int i=0;i<t;i++)
        {
            cin>>q; 
            if(dp[q]==1)    cout<<"YES"<<endl;
            else            cout<<"NO"<<endl;
        }
    
	return 0;
}
```
