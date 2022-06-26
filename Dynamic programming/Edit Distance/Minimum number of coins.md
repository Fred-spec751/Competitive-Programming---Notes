<h1 align="center">Minimum number of coins</h1>
<h3>Problema</h3>
<p>
  Dado una lista de N monedas (diferente valor), encontrar la minima cantidad de número de monedas cuya suma sea igual al número S, o reportar que no es posible 
  obtener dicha suma.
  
  <h3>Interpretación</h3>
  En los problemas de DP como se pudo estar observando, la solución se va construyendo de acuerdo a sub soluciones encontradas en anteriores pasos y estas sub soluciones
  pueden ser entendidas como states (estados). Los estados es lo que van a construir la solución final, por lo cual lo que podemos primero entender es del problema 
  original es posible dividirlo en sub problemas que primero deban de resolverse para después resolver el problema mayor en base a la solución de los sub problemas 
  iniciales. 
  
  Entonces, lo que se hace es iniciar con un estado, el estado inicial es el primer paso que se debe de dar en este tipo de problemas y para esto se debe de hacer
  observaciones al problema y en este caso el estado inicial será cuando es solicitado crear una suma de 0 lo cual nosotros ya sabemos que para esto la respuesta será 
  siempre 0, o sea que se necesita de 0 monedas para crear una suma de 0:
  
  dp[0] = 0       ->  Estado inicial
  
  Por lo cual podemos dejar las otras casillas del arreglo con un valor indefinido debido a que seguimos desconociendo la cantidad de monedas para realizar dicha
  suma, y este valor indefinido bien puede entenderse como un valor INF, o sea algo como 1e18.
  
  Hasta acá tenemos los estados iniciales y lo siguiente será ver que sucederá en la siguiente posición, o sea: dp[1]. Para esto se tendrá que hacer uso de alguna moneda,
  debido a que con cero monedas somos incapaces de poder cumplir con 1. Algo que también se debe de observar es que los índices nos van a servir para crear las sumas 
  mientras que en cada posición de cada suma se va almacenar la cantidad de monedas necesarias para formar dicho número representado como el índice.
  
  Entonces, para poder cumplir con 1 lo que se deberá de hacer es usar más monedas y supongamos que tenemos 4,3,6 así que debemos de checar todas las monedas posibles 
  y para esto se debe de comprobar que las monedas no estén excediendo del número solicitado, lo cual está sucediendo aquí debido a que todas sobrepasan a 1, por lo 
  cual nos debemos de 
</p>
