<h2>Double o flotante</h2>

Considerar el uso de un double y no de un float para el caso de decimales, esto es debido a la naturaleza de la precisión de cada tipo de datos, donde el double es aquel que tiene mayor precisión que un flotante. Esto origina que el uso de flotante de errores de decimales, por ejemplo podría ser 0.33333 y con un flotante se estaría obteniendo 0.33337 lo cual sería incorrecto.
Entonces, usar un double y no un flotante.

Para el caso en donde solo sea un decimal, o sea 10.5 por ejemplo lo más recomendable es usar dos enteros de tal forma que la lectura se haría como: scanf("%d.%d",&entero1,&entero2); y así gestionar como enteros ambos, debido a que el uso de un float o double cuando se requiere de un solo decimal puede generar respuestas incorrectas, así que lo mejor es usar un enteros y simular un decimal.

	
<h2>Impresiones del tipo: 001455</h2>
Habrá casos en donde se pide soluciones como estas, como el caso en donde se requiera imprimir enteros de 5 cifras y en caso que el número no ocupe 5 cifras pues colocar 0 en donde no se tenga números, esto se puede hacer fácilmente con printf de la siguiente manera: 
	printf("%.5d",numero);
Es explotar el uso de printf, de igual forma se puede manejar los scanf.


<h2>Realizar ordenaciones de una forma específica</h2>
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}	//Fuera del main

dentro del sort:
sort(arr, arr + n, compareInterval);



<h2>Tipos de DP</h2>
Top down: es con la tabla de memorización los resultados de los sub problemas para cuando aparezaca de nuevo tan solo acceder al resultado y no tener que computarlo. Usa backtracking.
<br>
Bottom up: método de tabular, usa una tabla DP y su dimensión es igual a la cantidad de parámetros necesario para representar un estado. Su modo de implementar es usando loops anidados.
Habrá dos versiones:
<ul>
	<li>Versión en donde los valores son almacenados en la celdas de la tabla DP</li>
	<li>Versión de un array de booleanos donde los resultados son usados como índices mientras que el valor es true or false.</li>
</ul>
