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
  
  <h3 align="center">Aplicaciones</h3>
</p>
