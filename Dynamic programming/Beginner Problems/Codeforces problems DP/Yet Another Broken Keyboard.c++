#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long t; cin>>t;
    long long n; cin>>n;
    
    string s; cin>>s;
    unordered_map<char,int> letter; 
    char le;
    
    // Se Almacena las letras permitidas
    for(int i=0;i<n;i++)
        {
            cin>>le;
            letter[le]=1;
        }
    
    /// PARTE DE DP
    vector<long long> dp(t+1,0); // Almacena la cantidad de palabras a formar según la longitud que es el indice 
    
    dp[0]=0;
    
    long long numero=1;
    
    // For para pasar por todo el string con una determinada longitud de substrings
    // Al final es usado la formula de Gauss debido a que es posible obtener esas sumas de esa manera
    for(int i=0;i<t;i++)
        {
            
            if((letter[s[i]]==1))
                {
                    dp[i+1] = dp[i];
                    dp[i+1] += numero;
                        
                    numero++;
                }
            else
                {
                    numero =1;
                    dp[i+1] = dp[i];
                }
            
        }
    // 1 3 6 10 15 15 16 18 21
    cout<<dp[t]<<endl;
	return 0;
}
