<h1 align="center">BadNeighbors – 2004 TCCC Round 4</h1>

<p>
  El problema puede ser resuelto de forma fácil usando una Stack, para esto se debe de realizar la observación de que los valores se deben de ir ingresando en una Stack
  de forma que se tendría lo siguiente:
  
  Ejemplo, sea el siguiente string: reallazy
  
  Dentro del Stack se tendría lo siguiente
  
  r
  <br><br>
  e<br>
  r
  <br><br>
  a<br>
  e<br>
  r
  <br><br>
  l<br>
  a<br>
  e<br>
  r
  
  <br>
  
  No obstante, antes de ingresar el siguiente carácter podemos observar que es 'l' y este mismo se está repitiendo con el carácter que tenemos en el front de la Stack,
  por lo tanto no se tendría que agregar y mas bien se tendría que sacar entonces tendríamos que estar consultando el front para ver si el siguiente valor no coincide
  con el valor de que sí lo haga hacer un pop del front.
  
  En este caso se tendrá que hacer un pop del front debido a que se está repitiendo el carácter 'l'. 
  
  <br><br>
  a<br>
  e<br>
  r
  
  Posteriormente se observa que el siguiente carácter es 'a' y este coincide con el carácter que tenemos en el front de nuestra Stack, así que nuevo se tendrá que 
  hacer un pop del front. Ya los siguientes valores no coinciden con el front, así que ya se tiene la Stack de la siguiente manera:
  
  <br><br>
  y<br>
  z<br>
  e<br>
  r
</p>


```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s; cin>>s;
    stack<int> pila;
    
    for(int i=0;i<s.size();i++)
        {
            if(!pila.empty() && (pila.top() == s[i]) )
                {
                    // Se elimina
                    pila.pop();
                }
            else
                {
                    // Se agrega
                    pila.push(s[i]);
                }
        }
    
    vector<char> ans;
    while (!pila.empty())
        {
            ans.push_back(pila.top());  pila.pop();
        }
    
    reverse(ans.begin(), ans.end());
    
    // Ans:
    for(int i=0;i<ans.size();i++)   cout<<ans[i];
    
	return 0;
}

```
