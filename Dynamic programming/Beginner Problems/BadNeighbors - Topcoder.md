<h1 align="center">BadNeighbors – 2004 TCCC Round 4</h1>
<p>
  <h3>Problema</h3>
  El problema trata sobre un pueblo con vecinos que se odian, en específico una persona va odiar a sus dos vecinos que tiene justo a lado de él. O sea supongamos que 
  tenemos a los vecinos: a,b,c. Tal que el vecino de interes será el vecino b, pues este vecino 'b' va odiar a sus vecinos a y c, no obstantes a otros vecinos que no
  los va odiar, solo va odiar aquellos que estén a lado de él.
  
  Una vez entendido esto, se sabe que ocurrió algo grave en el pueblo tal que se necesita de una cooperación para la restauración, el problema es que como los vecinos 
  se odian no van a cooperar en donde su vecino que odia también cooperó. Entonces, se tendrá una lista con la cantidad de dinero que cada vecino está dispuesto a 
  cooperar, no obstante no todos los vecinos van a cooperar debido a lo explicado anteriormente, por lo tanto nuestro deber será escoger aquellos vecinos que hagan que
  la suma de la cooperación sea la más grande posible. 
  
  Algo importante que debemos de tener en cuenta será que los vecinos, su orden, será el mismo en el que estén dando la cooperación no obstante como su orden es en forma
  de las manecillas del reloj el primero y último vecino serán en realidad vecinos adyacentes, o sea que se van a odiar.
  
  <h3>Ejemplo</h3>
  Supongamos que tenemos la siguiente lista de vecinos: 10, 3, 2, 5, 7, 8.
  
  Entonces se observa que el vecino que esté dando 10 a odiar al vecino que esté dando 8, de igual forma el vecino que de 2 va odiar a los vecinos que estén apoyando
  con 3 y 5. Dado esta situación se tendrá que escoger aquellos vecinos (que no se estén odiando mutuamente) para obtener la maxima recaudación. 
  
  Para este caso será: 10, 2, 7, que da en total 19.
  
  Lo anterior funciona debido a que sí tomamos 10 no se va poder tomar 3 ni 8, por lo tanto podemos tomar el siguiente que es 2 y no se va poder tomar 3 ni 5, pero 
  podemos tomar 7 y así conseguir una recaudación valida, ya solo faltaría por hacer que esta recaudación sea la maxima.
  
  <h3>Interpretación</h3>
  Para empezar con la solución se debe obsevar que siempre se va iniciar con el primer número de la lista o con el segundo número de la lista, ya que esto resulta fundamental para iniciar con la solución. Porque si arrancamos con el tercero o cuarto número de la lista nos vamos a estar perdiendo de una ganancia anterior, así que de esta manera podemos identificar los casos base.
  
  
</p>
