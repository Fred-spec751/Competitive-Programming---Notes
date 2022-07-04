<h1 align="center">Dynamic Programming - Introduction</h1>
<div>

<p align="justify">
  <h3>Introducción</h3>
  La programación dinámica se trata de un paradigma, uno difícil de aplicar, el cual está enfocado en relaciones de recurrencias. Existe una importante cantidad de problemas que pueden ser resueltos usando este paradigma, así que es necesario prestar mucha atención esta sección aunque  resulte muy difícil entender la teoría lo cual es algo que suele ocurrir muchas veces para los programadores que están iniciando en este mundo. 
</p>

<p align="center"><b>Algo importante a tener en cuenta es la abreviatura para hacer referencia a <i>dynamic programming</i> la cual será DP.</b></p>
  
  <br>
  Antes de continuar es necesario hacer mención sobre la existencia de dos enfoques de DP:
    <ul>
      <li>Top down (basado directamente en backtracking).</li>
      <li>Bottom up (técnica de tabulación).</li>
    </ul>
  
  <h3 align="center">En este caso el enfoque a conocer será <b><i>Bottom up</i></b>, debido a que es la forma pura de DP.<h3>
  <hr>
  <h3>Concepto</h3>
  Se debe de entender como una técnica basado en una fórmula de recurrencia de los algunos estados. La solución que se va a conseguir por medio de esta técnica será 
  obtenida usando soluciones anteriores de sub-problemas.
  <br><br>
  Entonces, lo primero a entender son las sub-soluciones para los sub-problemas. Es debido a lo anterior que se entenderá como un estado (state) una manera de describir una situación, que será la solución para el problema, de manera que si nosotros queremos encontrar la solución para el estado ‘i’ (solución al problema), primero debemos de encontrar sub-soluciones a estados anteriores y esto abre a la percepción de descomponer el problema original en sub-problemas, tal que la siguiente solución será construida usando las soluciones a sub-problemas anteriores. 


</div>
