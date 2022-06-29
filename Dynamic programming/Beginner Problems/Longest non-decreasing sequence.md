<h1 align="center">Longest Non-decreasing Sequence</h1>
<p>
  <h3>Problema</h3>
  Dado una secuencia de números aleatorios encontrar la subsecuencia no decreciente (creciente) más larga.
  
  <h3>Interpretación</h3>
  Lo que se tiene será una secuencia de números de forma aleatoria, donde tenemos que encontrar una subsecuencia creciente la cual no necesariamente deberá de ser continua, por lo cual se puede decir que de la secuencia: 1 2 1 4, la subsecuencia no decreciente más larga es 1 2 4.
  
  
  Entonces, para crear una solución se deberá de observar que se necesita un número menor y los demás deberán de ser mayores a este para poder tener una secuencia no decreciente más grande posible. No obstante no podemos simplemente encontrar el mínimo y de ahí partir porque podemos tener situaciones como:
  
  3 4 5 6 1
  
  Tal que al tomar el número menor será 1 y este nos está hasta el último, entonces la secuencia sería solo 1 (el propio número) mientras que en realidad al empezar 
  desde 3 se puede obtener una subsecuencia más grande.
  
  Esto nos da la perspectiva de que para cada número se deberá de saber la secuencia mayor, o sea conocer la secuencia más grande que tenemos hasta el número 'i' (hasta ese momento). Por lo tanto para el vector dp lo va almacenar será la longitud de la secuencia que se conoce hasta ese número: dp[i] = len. De lo anterior ya se puede ver los casos bases, recordando que los casos base son casos donde nosotros sabemos que siempre será así caemos en la cuenta que el caso base para este problema será que cada número está formando una secuencia siendo la longitud de la secuencia de 1, este es el caso base y puede ser representado desde la inicialización del vector dp:
  
  ```c++
  vector<int> dp(n,1);
  ```
  
  Continuando, lo próximo es ver cómo va aumentar la longitud, o sea las condiciones para saber si el siguiente número es adecuado para ser añadido a una secuencia y esto se hará a partir de la siguiente expresión:
  

Debemos de caer en la cuenta que será necesario tener dos ciclos for anidado, uno que esté recorriendo todas las posiciones de la secuencia original dada, mientras que el segundo ciclo estará recorriendo desde la primera posición hasta la posición donde se detuvo el primer ciclo:

```c++
for(int i=0;i<n;i++)
	for(int j=0;j<i;j++)
```

Y esto es con el objetivo de estar haciendo comparaciones de todos los números del arreglo ya recorridos con el número del arreglo actual, y esto es para armar la siguiente condición para ir agregando los números a una subsecuencia y es simplemente ver si alguno de los números anteriores es menor que el número actual, y si esto ocurre entonces tenemos que checar si la longitud de la subsecuencia, que se tiene en ese número que es menor al actual, es mayor al longitud del número actual. Cuando esto ocurra se hace la actualización: dp[i] = dp[j]+1;

```c++
	if(v[j] <= v[i])
		{
			if(dp[j]+1 > dp[i])
				{
					dp[i] = dp[j]+1;
				}
		}
```

Esto sería todo, el código completo es:

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
