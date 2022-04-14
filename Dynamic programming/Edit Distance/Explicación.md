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
  
  <h2>Casos Base</h2>
  Los casos base a ver es haciendo que cada cadena que se tiene, String 1 y String 2, deben ser comparados en un inicio con un String vacío o simplemente con un vacío y esto es para obtener los casos base. De modo que al realizar la comparación de un String con uno vacío la única forma que los dos sean igual será removiendo los carácteres del String de modo que esto generará que haya 1 costo por lo menos, o sea una operación en cada carácter para poder eliminarlo teniendo al final que las operaciones totales será igual a la longitud del String.
  <hr>
  Ejemplo con MOVIE y LOVE:
      
        _
      M 1 
      O 2
      V 3
      I 4
      E 5
      
   De forma similar tendremos para el otro String:
   
        L O V E
      _ 1 2 3 4
      
   Lo siguiente a realizar será entender que 
    
  
