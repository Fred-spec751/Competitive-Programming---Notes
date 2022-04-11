                                            // Edit Distance - Code
        
#include <bits/stdc++.h>
using namespace std;



int main() {
    
    string s1,s2; // Strings 
    cin>>s1>>s2;
    int dp[5005][5005]; // Tabulation
    
    memset(dp,0,sizeof(dp));
    
    int n=s1.size();
    int m=s2.size();
    
    // Base cases - Empty String
    for(int i=1;i<=n;i++)    dp[i][0]=i;    
    for(int i=1;i<=m;i++)    dp[0][i]=i;
    
    // Function
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                {
                    // Match
                    if(s1[i-1]==s2[j-1])
                        {
                            dp[i][j] = dp[i-1][j-1];
                        }
                    else
                        {
                            // Min:
                            // Mismatch/delete/add
                            dp[i][j] = min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
                        }
                }
        }
    
    /*
    for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
                cout<<dp[i][j]<<"  ";
            cout<<endl;
        }*/
            
    
    //Ans:
    cout<<dp[n][m];
    
	return 0;
}
