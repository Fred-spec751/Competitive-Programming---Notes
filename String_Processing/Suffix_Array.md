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
  
  
</p>
