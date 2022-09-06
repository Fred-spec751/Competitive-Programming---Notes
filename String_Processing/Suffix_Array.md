<h1 align="center">Suffix Array</h1>

>Procesamiento de cadenas: resolución de problemas sobre cadenas.

<p>
  En el presente tema se tratará de una estructura de datos que ya es considerada como avanzada y su principal función será para la manipulación de cadenas. Antes de
  seguir será necesario tener en cuenta los siguientes conceptos para comprender primero el título de esta estructura.
  
  <h3 align="center">Conceptos previos</h3>
  Para los ejemplos de cada concepto será usado el siguiente string: string s = "ABCD";
  <ol>
    <li>Substring: secuencia de caracteres consecutivos de un string. La cantidad de substrings de una cadena es n(n+1)/2. <br><br> Ejemplo: Los substrings de s son:
        A,B,C,D,AB,BC,CD,ABC,BCD,ABCD.</li><br><br>
    <li>Subsequence: es una secuencia que NO ES NECESARIAMENTE CONSECUTIVA de caracteres de un string en su orden original, la cantidad de substrings que se puede
        tener son 2n - 1. <br><br>Ejemplo: A,B,C,D,AB,AC,AD,BC,BD,CD,ABC,ABD,ACD,BCD y ABCD. <br> Se puede encontrar cierta similitud con los subconjuntos.</li><br><br>
    
   <li>Prefix: es un substring que tiene inicio con el comienzo del string original<br><br>Ejemplo: A,AB,ABC,ABCD.</li><br><br>
   <li>Suffix: es un substring que tiene termina con el final del string original <br><br>Ejemplo: D,CD,BCD,ABCD.</li>
  </ol>
  
  Entonces, ya podemos empezar a deducir el funcionamiento y/o uso de esta estructura de datos el cual es manipulación de strings por medio de los suffix.
  
  Antes de continuar, es importante aclarar que a este punto lo que pienso que será mejor entender será ver Suffix Array como una especie de caja negra, tal que será primero importante saber qué hacer esta estructura de datos, para qué funciona ese código y cómo es que nos puede ayudar, o en qué situaciones, para poder realizar soluciones a problemas con strings. Entonces, primero vamos a enteder esta estructura de datos como una caja negra, tal que nosotros no nos va interesar (por el momento) cómo funciona cada línea de código sino que primero vamos a entender qué va a recibir de entrada y qué nos va a dar de salida.
  
  Ya entrando en materia, se tiene que esta estructura de datos, Suffix Array, será una estructura que va tomar nuestro string original y lo va descomponer en sus 
  sufijos tal que se tendrá una lista de suffix. Entonces se tendrá lo siguiente:
  
  Supongamos que tenemos la siguiente situación: <br> string s = "GATAGACA$";
  <br>
  Por ende, vamos a proceder a crear una lista sobre los suffix teniendo en mente el concepto de este, el cual fue presentado anteriormente.
  
  <ul>
  <li>0. GATAGACA$</li>
  <li>1. ATAGACA$</li>
  <li>2. TAGACA$</li>
  <li>3. AGACA$</li>
  <li>4. GACA$</li>
  <li>5. ACA$</li>
  <li>6. CA$</li>
  <li>7. A$</li>
  <li>8. $</li>
  </ul>
  
  El siguiente paso será realizar un ordenamiento lexicográficamente, tal que el orden se haga por el primer caracter y en caso de ser el mismo caracter cambiar a la siguiente posición y realizar la comparación. Algo importante a tener en cuenta es que el caracter '$' es menor a cualquier letra, por ende esté será el primer caracter a colocar, y esto es importante tenerlo en cuenta debido a que será este caracter usado para la implementación de Suffix array (ya en código). 
  
  <ul>
  <li>8. $</li>
  <li>7. A$</li>
  <li>5. ACA$</li>
  <li>3. AGACA$</li>
  <li>1. ATAGACA$</li>
  <li>6. CA$</li>
  <li>4. GACA$</li>
  <li>0. GATAGACA$</li>
  <li>2. TAGACA$</li>
  </ul>
  
  Ahora, ya que tenemos la lista ordenada lo siguiente será definir y ver qué es el suffix array, y contrario a lo que se podría pensar en un principio el arreglo de sufijos no estará constituido realmente por los sufijos (esas cadenas), sino que será las posiciones, o sea que el suffix array es un arreglo de enteros tal que corresponden a las posiciones de los sufijos dentro del arreglo original.
  
  Para entender esto, podemos guardar estos sufijos en un arreglo tal que se tendrá lo siguiente:<br>
  suffix_array = {8,7,5,3,1,6,4,0,2};<br>
  <br>
  Por ende será posible acceder a cada sufijo por medio de cada posición porque en sí la posición que se guarda estará correspondiendo al prefijo de cada sufijo, o sea se está guardando la posición del primer caracter de cada sufijo, tal que yo sé que apartir de ahí y todo lo que está a la derecha corresponde a un sufijo.
  
  Esto es Suffix array.
  
  Por ende, nuestra cada estará funcionando de la siguiente manera: nosotros le vamos a dar un string y vamos a tener como salida un arreglo de enteros que corresponde
  a la posición de cada sufijo del arreglo original. Finalmente, la complejidad de este algoritmo ya de forma optimizada es de O(nlogn) por lo tano será poosible la resolución de problemas de 100K datos, o sea un string de 100k de longitud.
  
  <h2 align="center">Aplicaciones</h2>
  <h3 align="left">String Matching</h3>
  Este problema se trata sobre encontrar un string patrón P dentro de un string T (el string original).
  
  Entonces, dado un string s será dado una cantidad de solicitudes tal que cada solicitud será conformado por un string p, tal que será necesario contestar si el string p aparece en el string s como un substring.
  
  Bien, para la resolución de este problema se tendrá que usar la siguiente información:
  <ol>
  <li>Los conceptos de suffix y prefix.</li>
  <li>Un algoritmo de búsqueda.</li>
  <li>Suffix array.</li>
  </ol>
  
  Para iniciar, lo que se entender primero es que de los posibles strings que se tienen se pueden comportar como prefijos de los sufijos, un ejemplo de esto sería el siguiente caso:<br>
  Sea p = "AG";
  <br> Es el prefijo del sufijo: 3. AGACA$<br>
  
  Por ende, lo primero que podemos hacer en nuestro arreglo de sufijos es fijarnos en aquellos suffix que tengan como prefix el arreglo p, y será sobre entre estos sufijos los cuales se realizará la búsqueda del string p. Entonces, para hacer esto se podrá cortar el arreglo original en el tamaño del string p tal que ahora ya se tendrá un arreglo de sufijos de tamaño p tal que será ahí donde se realizará la búsqueda.
  
 La búsqueda se realizará por medio de un algoritmo ya se ha trabajado y funciona en un tiempo logaritmico, ¿lo recuerdas? Claro, hablamos de binary Search, siendo este el algoritmo que vamos a tener que implementar para poder dar con la solución a este problema, pero la diferencia será que vamos a realizar comparaciones 
 directamente con los caracteres y no con números, por ende será necesario tener en cuenta la siguiente función que nos va a facilitar las cosas.
 
 
  <h4 align="left">Strcmp() </h4>
  De esta función, que es de C, lo que nos interesa es lo que nos va devolver al momento de usarla, siendo que esta función es usada para realizar comparaciones entre
  dos string de forma lexicográfica. Realizará la comparación de carácter por carácter hasta llegar al final o un termino NULL (en caso de no ser iguales). Nos va devolver tres posibles resultados. Es necesario que las comparaciones se hace desde el primer carácter.
 <ol>
  <li>Valor igual a 0: se determina que ambas cadenas son totalmente idénticas</li>
  <li>Mayor que cero > 0: se determina que el carácter del string 1 (posición de la izquierda) se encuentra después que el carácter del string 2.</li>
  <li>Menor que cero < 0: se determina que el carácter del string 1 (posición de la izquierda) se encuentra antes que el carácter del string 2.</li>  
</ol>
  
  Después será necesario mantener en mente que se necesitará tanto el lower_bound como el upper_bound, los cuales son alteraciones del algoritmo original de binary search, siendo que lower_bound nos va dar el elemento menor o igual al búscado. Por otro lado, el upper_bound nos dará el elemento mayor.
  
  La necesidad de crear esto es para encontrar un rango, pero primero hay que ver la forma de crear un algoritmo tal que solo me encuentre sí existe, no importa si hay más de algún substring que cumpla con esta característica, solo me va importar que exista y por ende el algoritmo solo se deberá de enfocar en eso. Para esto se tendrá que plantear un algoritmo que sea capaz de usar  los valores que retonar la función planteada arriba tal que el funcionamiento será tal cual el que tiene una búsqueda binaria, siendo que el algoritmo queda de la siguiente manera:
  
  
  
</p>

```c++
#include<bits/stdc++.h>
#define MAX_N 400010
using namespace std;

string T;
string p;
int n;
int RA[MAX_N], tempRA[MAX_N];
int SA[MAX_N], tempSA[MAX_N];
int c[MAX_N];

void countingSort(int k)
	{
		long long i, sum, maxi = max(300010,n);
		memset(c,0,sizeof(c));
		for(int i=0;i<n;i++)
			{
				c[i+k<n?RA[i+k]:0]++;
				
			}
		
		for(i=sum=0;i<maxi;i++)
		    {
		        int t = c[i];
		        c[i] = sum;
		        sum+=t;
		    }
		
		for(i=0;i<n;i++)
			tempSA[c[SA[i]+k<n ? RA[SA[i]+k] : 0]++] = SA[i];
		
		for(i=0;i<n;i++)
			SA[i] = tempSA[i];
	}
	
	
void constructSA()
	{
		int i,k,r;
		for(i=0;i<n;i++) RA[i] = T[i];
		for(i = 0;i<n;i++) SA[i] = i;
		
		for(k=1;k<n;k<<=1)
			{
				countingSort(k);
				countingSort(0);
				tempRA[SA[0]] = r= 0;
				
				for(i=1;i<n;i++)
					tempRA[SA[i]] = (RA[SA[i]]==RA[SA[i-1]] && RA[SA[i]+k]==RA[SA[i-1]+k])?r:++r;
				
				for(i=0;i<n;i++)
					RA[i] = tempRA[i];
				
				if(RA[SA[n-1]] == n-1) break; 
			}
	}
 	
//.substr (SA[i],n-1);

bool StringMatch(int n)
    {
        int izq = 0; int der = n-1; int mitad = izq;
        
        while(izq < der)    // Seguimos teniendo un rango que explorar
            {
                // Se obtiene la mitad para realizar la comparación y después checar si está antes o después 
                
                mitad = (izq+der)/2;
                
                // Se realiza la comparación
                // cout<<"Comparative "<<T.substr(SA[mitad],p.size())<<endl; // Impresiones de ayuda
                
                
                int valor = T.compare(SA[mitad],p.size(),p);
                
                if(valor == 0) return true;
                if(valor>=0)
                    {
                        der = mitad;
                    }
                else
                    {
                        izq = mitad+1;
                    }
                //cout<<"valores: "<<izq<<" "<<der<<endl<<endl; // Impresiones de ayuda
                
                
            }
        if(T.compare(SA[izq],p.size(),p) == 0) return true;
        else                                return false;
    }

int main()
	{
	    int t;
	    cin>>T>>t;    
	
		n = T.size(); 
		T[n++] = '$';
		constructSA();
		
		for(int  i = 0;i<t;i++)
		    {
		        cin>>p;
		        if(StringMatch(T.size()+1))
        		cout<<"Yes"<<endl;
        	    else cout<<"No"<<endl;
		    }
		
	    
	    //cout<<(T.compare(SA[4],p.size()-1,p) == 0);
	    
		return 0;
	}
```


<p>
	<h3 align="left">Finding LCP of two suffixes</h3>
	Este problema es sobre encontrar el longest Common prefix, por ende lo importante será volver a enfocarse en el arreglo de enteros que ya está ordenado de acuerdo a los sufijos de nuestro string original. Primero, esto es tal cual suena, calcular el mayor prefijo, no obstante lo que se hará primero es calcular el prefijo mayor entre los consecutivos sufijos del suffix array, para después encontrar lo solicitad.
	
La cuestión es primero encontrar el LCP de cada dos sufijos consecutivos del suffix array, con esta información nosotros vamos a poder encontrar el LCP en dos posiciones aleatorias, tal que será posible entonces obtener el LCP entre la posición inicial y final, o sea el LCP de todo el string. Por ende, lo primero a realizar es construir el arreglo de LCP entre dos sufijos consecutivos y para esto será simplemente tomar dos sufijos y comparar sus carácteres tal que dejamos de contar hasta que uno sea diferente, y colocamos el número el cual ya corresponde al lcp de esos dos sufijos, de forma práctica se tiene lo siguiente

Nota: recordemos que en la implementación se tiene una posición extra en mi suffix array el cual corresponde a '$' o simplemente un vacío.

  <ul>
   <li>9. </li>
  <li>8. $</li>
	<li>LCP = 0</li>
  <li>7. A$</li>
	<li>LCP = 0</li>
  <li>5. ACA$</li>
	<li>LCP = 1</li>
  <li>3. AGACA$</li>
	<li>LCP = 1</li>
  <li>1. ATAGACA$</li>
	<li>LCP = 1</li>
  <li>6. CA$</li>
	<li>LCP = 0</li>
  <li>4. GACA$</li>
	<li>LCP = 0</li>
  <li>0. GATAGACA$</li>
	<li>LCP = 2</li>
  <li>2. TAGACA$</li>
	<li>LCP = 0</li>
  </ul>
  
  
  Ahora, es importante poder construir este arreglo ya que una vez que tenemos esto es posible poder consultar el LCP entre dos posiciones de mi arreglo, y para esto la respuesta será el número mínimo entre esas dos posiciones:
  
  ans = min (Lcp( i, j ))
  
  
  Pero, ¿por qué el mínimo? Para poder entender esto se debe hacer la observación de que la cantidad mínima será con toda seguridad el que siempre estará presente en todos los suffix, porque es el mínimo, no tomamos el máximo porque solo estará presente en un caso o en algunos, pero el mínimo estará para:
  
  A<br>
  AB<br>
  ABC<br>
  
  Podemos decir que el máximo de LCP entre dos casillas es de 2, no obstante el LCP de todos es de 1, siendo A porque este es el mínimo que se encuentra presente en todo el string. Entonces, finalmente esto se resume en encontrar el mínimo en un segmento de mi suffix array.
  
  Un ejemplo ya en mi string es LCP (4,7), en este caso busco esas posiciones dentro de mi suffix array y al estar asociado ya el arreglo de diferencias, solo tengo que ver el mínimo en ese segmento
  
  <ul>
	<li>7. A$</li>
	<li>LCP = 0</li>
  <li>5. ACA$</li>
	<li>LCP = 1</li>
  <li>3. AGACA$</li>
	<li>LCP = 1</li>
  <li>1. ATAGACA$</li>
	<li>LCP = 1</li>
  <li>6. CA$</li>
	<li>LCP = 0</li>
  <li>4. GACA$</li>
	<li>LCP = 0</li>
	</ul>
  
  
  Tal que el mínimo es 0, o sea que el mínimo prefijo entre esas dos posiciones es 0, siendo que no hay.
  <br>
  string s = "GATAGACA$";<br>
  Podemos observar que el segmento que se va analizar es: AGAC, tal que el prefijo pues en sí 0.
  
  <br> Un caso cuando es diferente de cero
  <br>LCP(3,5)
  <br>
  
  <ul>
	<li>5. ACA$</li>
	<li>LCP = 1</li>
  <li>3. AGACA$</li>
	<li>LCP = 1</li>
	</ul>
  
  <br>
  string s = "GATAGACA$";<br>
  En este caso el menor es 1, viendo el segmento que se va analizar: AGA
  
  
  La implementación de esto se hace en tiempo lineal ya que solo estamos explorando por aquellos que no han sido contados, tal que los contados ya se van teniendo en cuenta, y los que no han aparecido en anteriores se debe a que todavía no es su turno de aparecer.
  
  Primero, para esto el algoritmo lo que hace es estar en la posición del sufijo más largo para después calcular el LCP anterior a ese sufijo largo, osea el LCP anterior al sufijo actual. La forma de hacer esto será tal cual realizar la comparación de estos dos sufijos
  
  
<ul>
  <li>4. GACA$</li>
  <li>0. GATAGACA$</li>
  </ul>
  
  
  Se cuentan los carácteres que coinciden, 2. Podemos ir haciendo esto para toda slas demás posiciones, siendo la siguiente para el sufijo de la posición 1. No obstante, hay algo interesante que debemos de observar y es que como los sufijos se van creando eliminando el primer carácter, entonces podemos decir que el sufijo en la posición 1 será creado eliminando el primer carácter dle sufijo en la posición 0, tal que vamos a tener que de el sufijo de la posición 0 y el sufijo en la posición 1 se tendrá k-1 caracteres iguales (siendo k la longitud de carácteres iguales). NO OBSTANTE, aquí entra la importancia de que el arreglo esté ordenado, debido a que una vez que el arreglo esté ordenado, con ellos que los sufijos estén ordenado lexicográficamente, se tendrá que los sufijos entre estas posiciones dentro de mi suffix array tendrán k-1 carácteres iguales. Por ende nosotros ya no debemos de chcear estas k-1 caracteres porque ya sabemos que serán iguales, solo tendrémos que checar los carácteres que le siguen de estos k-1 caracteres,m porque ahí si no sabemos si son o no iguales.
  
  <br> No vamos a pasar de realizar 2n checadas a lo mucho.
  <br>
  Lo anterior será aplicado tanto para el arreglo i como su previo, en este caso el 0 y el sufijo previo a este, tal que al aumentar y tener el sufijo 1 y el sufijo previo a este se estará cumpliendo lo anterior.
  
  Veamos entonces el siguiente caso cuando vamos por el sufijo 1
  
  <ul>
  <li>8. $</li>
  <li>7. A$</li>
  <li>5. ACA$</li>
  <li>3. AGACA$</li>
	<li>1</li>
  <li>1. ATAGACA$</li>
  <li>6. CA$</li>
  <li>4. GACA$</li>
	<li>2</li>
  <li>0. GATAGACA$</li>
  <li>2. TAGACA$</li>
  </ul>
  </p>

Entonces para el sufijo ya se estará cumpliendo la regla anterior
<ul>
  <li>8. $</li>
  <li>7. A$</li>
  <li>5. ACA$</li>
  <li>3. AGACA$</li>
	<li>1</li>
  <li>1. ATAGACA$</li>
  <li>6. CA$</li>
  <li>4. GACA$</li>
	<li>2</li>
  <li>0. GATAGACA$</li>
	<li>0</li>
  <li>2. TAGACA$</li>
  </ul>
  
  Tal que la cantidad de carácteres iguales que había entre i+1(sufijo 1) y j+1(sufijo previo al 1) es de k=1, entonces k=0
  <br>
  Para el sufijo 3 se tiene que si el sufijo 2 y el precio tiene 0 carácteres, entonces el 3 también tendrá 0 carácteres iguales, por ende se tendrá que realizar el conteo<br>
  
  <ul>
  <li>8. $</li>
  <li>7. A$</li>
  <li>5. ACA$</li>
	<li>1</li>
  <li>3. AGACA$</li>
	<li>1</li>
  <li>1. ATAGACA$</li>
  <li>6. CA$</li>
  <li>4. GACA$</li>
	<li>2</li>
  <li>0. GATAGACA$</li>
	<li>0</li>
  <li>2. TAGACA$</li>
  </ul>
  </p>
