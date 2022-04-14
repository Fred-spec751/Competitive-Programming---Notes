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
      
   Lo siguiente a realizar será entender lo que va a suceder con los demás casos y es que se deberá de realizar el mismo razonamiento debido a que se deberá de comparar de modo que se presentará las diferentes operaciones que se deberá de realizar para hacer que un String B llega a ser un String A.
   
   Cada caracter deberá de compararse con el otro carácter del otro String, y en sí se podría pensar que no va a importar en sí la operación a realizar puesto que finalmente las operaciones tiene un valor de 1, excepto cuando son iguales.
   No obstante, aunque se tenga que todas las operaciones sean igual se tendrá que escoger uno u otro da que se hagan menos operaciones o más operaciones. Esto tendrá más sentido cuando ya tengamos la tabla construida y se recosntruya la solución debido a que en un inicio realmente se pudo haber aplicado cualquier operación pero ya al tener el resultado y reconstruir la solución se deduce cuál fue la operación realizada.
   
   Entonces, se realizando así el llenado de tabla por medio de la comparación.
   
   La primera línea se tendrá lo siguiente:
   
    
        _ L O V E
      _ 0 1 2 3 4 
      M 1 
      
   Se observa que para que M sea igual a un string vacío simplemente se tendrá que hacer una operación, eliminar ese caracter
   
        _ L O V E
      _ 0 1 2 3 4 
      M 1 1
  
   Una vez pasado el caso de prueba lo siguiente será ver que para que M sea igual a L será necesario realizar una operación como intercambiar un elemento, de mismo modo sucederá con la otra letra.
   
        _ L O V E
      _ 0 1 2 3 4 
      M 1 1 2
   
   Ahora se observa que para que M sea igual a L O será necesario aplicar dos operaciones, así constantemente por lo cual podemos avanzar al siguiente renglón.
   
        _ L O V E
      _ 0 1 2 3 4 
      M 1 1 2 3 4 
      O 2 2
   
   Ahora se deberá de cotemplar que para que M O sea igual a L se deberá de hacer dos operaciones, no obstante esto cambiará para cuando se llegue a 0
   
        _ L O V E
      _ 0 1 2 3 4 
      M 1 1 2 3 4 
      O 2 2 1
     
   ¿Por qué sucede esto? Esto es debido a que debemos hacer uso de la tabla y contemplar los movimientos realizados anteriormente de manera que si nos vamos por el camino de O debemos de hacer dos modificaciones para que M O y sean iguales a L y esto aumentará para cuando lleguemos a 0 debido a que anteriormente debimos de haber borrado un carácter y sustituido otro para hacer que sea igua a L, de manera que llegando a O se tendrá que hacer otra operación para hacer que aparezca O.
   
   Pero en lugar de hacer todo esto debemos de fijarnos en lo que tenemos anteriormente y es que antes ya habiamos definido que para que M se parezca a L será necesario hacer una operación que es cambiar a M, de manera que al momento de llegar con O ya tenemos en ambos lados una O haciendo que ya no se haga nada, es de esta manera que se va rellenando la tabla. 
   
   También podemos observar que esto será lo mismo que escoger el menor número que se tenga al rededor para definir el siguiente número de la casilla, o sea:
   
         _ L O V E
      _ 0 1 2 3 4 
      M 1 1 2 3 4 
      O 2 2 1
      
            2 3  
            1 ?
   
   Aquí debemos de observar que para definir el siguiente número en sí se va a resumir en tomar el valor más pequeño, en este caso será 1.
   
   Ahora, lo segundo más importante será que una vez tomado ese valor más pequeño se tendrá que comparar a los carácteres de las posiciones actuales de modo que se tendrá dos casos:
   
   <ul>
      <li>Caracteres diferentes: en este caso si son diferentes quiere decir que será necesario hacer una operación por lon cual al valor escogido se tendrá que sumar un 1</li>
      <li>Caracteres iguales: si son iguales quiere decir que no será necesario hacer ninguna otra operación por lo cual se tiene que el valor escogido (el valor mínimo) será realmente el mismo.</li>
    </ul>
    
   Para nuestro caso se ve que O es diferente de V por lo tanto se tendrá que sumarle 1 (hacer una operación), así se termina de llenar la tabla:
   
        _ L O V E
      _ 0 1 2 3 4 
      M 1 1 2 3 4 
      O 2 2 1 2 3
      V 3 3 2 1 2 
      I 4 4 3 2 2
      E 5 5 4 3 2
   
   Finalmente la solución queda en la última posición de la tabla, o sea en la esquina inferior derecha.
      
   Para reconstruir la solución simplemente se tendrá que seguir el camino el cual estará constituido por los valores más pequeños, usualmente tiene forma de diagonal, en este caso sería: 2-2-1-1-1.
   
