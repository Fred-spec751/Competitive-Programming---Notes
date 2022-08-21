<h1 align="center">Stack in C++</h1>

<p>
  Las Stack están ya implementadas dentro de C++, estas se encuentran en la librería #include < stack >, no obstante se van a incorporar a nuestro código usando la
  librería que siempre usamos: #include < bits/stdc++.h >.
  
  En esta ocasión no se verá la implementación de esta estructura de datos, puesto que lo fundamental es saber cómo funciona debido a que su implementación pues ya fue 
  aprendida en EDA 1 y no tendría caso ver una implementación de algo que ya se encuentra en el lenguaje, el cual seguramente será una superior implementación que 
  cualquiera que podríamos hacer nosotros en medio de un contest.
  
  Es por esto que vamos a recordar las operaciones más importantes y el funcionamiento de estas.
  
  Primero, para entender qué es una Stack podemos recurrir al ejemplo clásico de una Pila de libros, tal que debemos de suponer que tenemos una cantidad 'n' de libros,
  siendo que el primer libro estará siendo colocado como aquel que de inicio a esta Pila de Libros, o sea como la base. Posteriormente el segundo libro estará siendo
  colocado encima del primer libro y así hasta formar una columna de 'n' libros lo cual es igual a una Pila de libros. La particularidad que se debe de observar en 
  esta Pila de libros es que el primer libro (libro base) no será posible acceder a el inmediatamente, sino que para acceder a el tenemos que primer quitar de uno por 
  uno todos los de más libros que fueron colocados por encima de el, y aquí tenemos este primer concepto importante:
  
  EL PRIMERO EN ENTRAR ES EL ÚLTIMO EN SALIR, por lo cual se observa que el último elemento (último libro) es el primero en salir.
  
  Por lo tanto: se define como una estructura LIFO (Last In First Out).
  
  Es de este modo que se observa que el último elemento agregado se encuentra como el top de la pila y así podemos llamar este lugar como top, y podemos acceder a el 
  en un tiempo super rapido debido a que está luego luego en la entrada de la pila y de igual manera podemos quitarlo muy rápido porque está en la entrada. De manera 
  formal esto lo podemos lograr por medio de apuntadores siendo una Stack una implementación parecida o basada en una lista ligada, donde se van creando los nodos y 
  después se cada nodo apunta al siguiente por medio de apuntadores que estén apuntando a las direcciones de memoria del siguiente nodo.
  
  De manera formar vamos a tener las siguientes operaciones en una Stack:
  <ol>
    <li>Empty: se comprueba si la pila está vacia, me devuelve un booleano siendo verdadero en caso de tener elementos o falso en caso contrario. O(l)</li>
    <li>Size: regresa la cantidad de elementos de la pila. O(l)</li>
    <li>Top: accede al último elemento agregado, el cual sería igual el primer elemento que puede salir. O(l)</li>
    <li>Pop: eliminar o saca al último elemento agregado. O(l)</li>
    <li>Push: agrega un elemento al final, o sea se convierte en el nuevo top de la Stack. O(l)</li>
  </ol>
  
  Con estas funciones podemos principalmente trabajar para resolver problemas.
  
  <h2 align="center">Ejemplo - Valid Expression</h1>
  Dado un string de paréntesis indicar si están balanceados. Se entiende por balanceado cuando un paréntesis abierto tiene su correspondiente paréntesis cerrado.
  Ejemplo: (())
  
  Input: (())
  
  Para resolver esto debemos de pensar que los mismos paréntesis que se van incorporando deben tener su correspondiente paréntesis que lo cierra y para esto podemos 
  usar una pila tal que se vayan agregando los paréntesis que abren para cuando llegue un paréntesis de cierre pues deberá de coincidir que el paréntesis que está
  en el top de la Stack sea abierto y así hacer un match. Si esto sucede se deberá de hacer un pop del top().
  
  Como podrá suponerse, se devolverá true en case de que la Stack sea vacía lo cual nos indica que hubo un match con todos los paréntesis
  
  <br><br>
  (
  
  <br><br>
  (<br>
  (
  
  En este punto se tiene que el siguiente paréntesis que se va agregar pues será de cierre por lo cual corresponde al paréntesis que está abierto en el front de la 
  Stack, así que hacemos un pop del top de la Stack.
  
  <br><br>
  (
  
  Finalmente, el último paréntesis que se va agregar es de cierre y estará correspondiendo al elemento que se encuentra en el top, así que se hace un pop. En estos
  momentos la Stack se encuentra vacía, así que se concluye que la expresión en valida o está balanceado.
  
  
  Input: ((())
  
  <br><br>
  (
  
  <br><br>
  (<br>
  (
  
  <br><br>
  (<br>
  (<br>
  (
  
  <br><br>
  (<br>
  (
  
  <br><br>
  (
  
  En este caso la Stack no queda vacía, no es valida la expresión. 
  
  Esto mismo puede extrapolarse al incorporar más símbolos a la expresión, simplemente se deberá de tener en cuenta estos símbolos incorporados y ver que hagan match,
  pero el criterior de eliminación y respuesta sigue siendo la misma.
</p>
