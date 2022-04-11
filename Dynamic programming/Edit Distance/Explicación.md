<h1>Edit distance</h1>
<p>
  El problema trata que dado dos cadenas (dos Strings) se debe de encontrar la cantidad mínima de operaciones (ediciones) para transformar un string en otro, de modo que
  lo común suele ser convertir la segunda cadena (String B) en la primera cadena (String A).
  Las reglas a tener en cuenta son las situaciones que son posibles encontrar:
  <ol>
    <li>Hay coincidencia en ambos carácteres</li>
    <li>No hay coincidencia en ambos carácteres</li>
    </ol>
  
  De modo que las operaciones a realizar podrán ser las siguientes
  <ol>
    <li>No hacer nada - Costo: 0</li>
    <li>Remover un carácter del String - Costo: 1</li>
    <li>Reemplazar una carácter o agregar un espacio (esto puede variar) - Costo: 1.</li>
    </ol>
    
  > Nota: costo hace referencia lo que vale esa operación, o sea 1, que en total sería en sí la cantidad de operaciones a realizar. 
  <hr>
  
  La solución optima para resolver esto será por medio de dynamic programming, esto es debido a que al tener la condición de usar la mínima cantidad de operaciones 
  para convertir un String en otro será necesario probar diferentes conjuntos de operaciones y quedarnos con aquel conjunto de operaciones menor, lo cual si lo vemos
  como una generación de subconjuntos esto fácilmente podrá tener una complejidad de 2^n.
 
  Entonces, queda expuesto la encesidad de usar diferentes combinaciones de operaciones para poder conseguir esto, puesto que tenemos por lo menos tres diferentes tipos
  de situaciones con su respectiva forma de actuar, por lo cual estos los ingredientes para un problema con solución DP.
  
  La forma de abordar esto será por medio de la siguiente observación que es por medio de los casos bases.
