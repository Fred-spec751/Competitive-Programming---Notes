<h1 align="center">Queue in C++</h1>

<p>
  En este caso se tendrá esta siguiente estructura la cual es la Queue, esta estará funcionando de la siguiente manera.
  
  Supongamos que vamos al cine y lo usual es que encontremos una fila, lo que hacemos es formarnos al final de la fila de tal modo que nosotros tendremos que esperar 
  hasta que todos los que estén adelante de nosotros hasta llegar nuestro turno y salir. De esto tenemos que hacer ver la característica de que el primero en entrar 
  a la fila es el primero en salir, siendo que el último entrar será el último en salir, por lo cual podemos decir que esta estructura es del tipo:
  
  FIFO (First in First Out)
  
  Ahora, normalmente la Queue es implementada usando apuntadores tal que sean nodos que tengan la información y cada nodo tenga un apuntador que esté apuntando a la 
  dirección de memoria del siguiente nodo. Esto se podría decir que se encuentra basado en una lista enlazada, por lo cual sus operaciones serán muy eficientes.
  
  De manera formal, sus operaciones dentro de C++ son las siguientes:
  
  <ol>
    <li>Empty: nos regresa un valor bool indicando si la Queue está vacía o no (false or true). O(l)</li>
    <li>Size: nos regresa un entero indicando el tamaño de la Queue, en caso de que esté vacía pues el tamaño es 0. O(l)</li>
    <li>Front: accede al primer elemento de la Queue. O(l)</li>
    <li>Back: accede al último elemento de la estructura, o sea el más reciente que fue agregado. O(l)</li>
    <li>Push: inserta un elemento al final de la Queue. O(l)</li>
    <li>Pop: quita el elemento que se encuentra en el front O(l)</li>
  </ol>
  
  De manera gráfica lo tenemos de la siguiente manera: 
  <br>
  <img src="../Problems/Images/queue.png">
</p>
