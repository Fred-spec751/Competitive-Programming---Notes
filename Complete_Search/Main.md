<h1 align="center">Complete Search - Brute Force</h1>

<p>
  Este tema es considerado como un paradigma o una técnica de resolución de problemas, por lo cual podemos entenderlo mejor como un método para la resolución de problemas
  y un paradigma algorítmico el cual consiste en explorar todas las posibles soluciones (todas las propuestas que pueden o no clasificar como solución) de un determinado
  problema hasta encontrar aquella solución que logre satisfacer con los criterios y restricciones del problema.
  
  Lo primero a entender es que en ciencias de la computación (y en muchos problemas de programación competitiva) se tiene dos tipos de problemas:
  <ol>
    <li>Problemas de optimización</li>
    <li>Problemas de decisión</li>
    </ol>
  
  Normalmente, la técnica de búsqueda completa es usual de aplicar para problemas de decisión, no obstante es posible generar algoritmos que puedan resolver problemas 
  de optimización usando complete search (en específico Backtracking).
  
  Entonces, para abordar el tema será necesario ver que existen a grandes rasgos dos formas de usar esta técnica de búsqueda completa:
  <ol>
    <li>Iterativa - Búsqueda de cada solución para su comprobación (complejidades en su mayoría de orden polinomial).</li>
    <li>Recursiva - Empleo de Backtracking (complejidades usualmente altas).</li>
  </ol>
  
  Por lo tanto, lo primero que se hablará será sobre la forma iterativa de Complete Search.
  
  <h2 align="center">Forma iterativa</h2>
  Hay que tener siempre presente que son algoritmos de fuerza bruta, o sea que la idea principal será la generación de todas las posibles soluciones (propuestas de
  solución) para después contar o seleccionar las soluciones que sean correctas.
  
  La forma usual será explorar todo el arreglo que se tenga o la información dada por el usuario para encontrar aquellas soluciones que cumplan con las restricciones 
  dada por el problema. Para entender será mejor verlo con un ejercicio.
  
  <h3 align="left">11565 - Simple Equations</h3>
  Tenemos las siguientes ecuaciones
  <ul>
	<li>x + y + z = A</li>
	<li>xyz = B</li>
	<li>x^2 + y^2 + z^2 = A</li>
	</ul>
  
  Escribe un programa tal que encuentre los número x, y & z que satisfacen con las ecuaciones anteriores.
  
  Primero ser dará la cantidad de test y después los valores de A, B y C. Si no hay solución imprimir: No solution.
  
  Constrains: (1 ≤ A, B, C ≤ 10000).<br>
  
  Input:<br>
  2<br>
  1 2 3<br>
  6 6 14<br>
  
  <br>
  Ouput:<br>
  No solution.<br>
  1 2 3<br>
  
  <br>
  Para esto será simplemente pensar en una forma de realizar la iteración sobre todos los números posibles que pueden llegar a tomar x, y & z, y la forma de realizar
  este recorrimiento será por medio de un for tal que vaya del menor número que puede llegar a ser los valores buscados hasta su máximo valor. Simplemente se tendría
  que tener for anidados para cada variable para después únicamente tener que verificar las ecuaciones y si todas cumplen arrojar un respuesta.
  
  Ahora, la dificultad solamente recae en ver en qué rango debemos de iterar, para esto se deberá de tener en cuenta aquella ecuación donde tendremos los valores
  más grandes y esta es la tercera debido a que se opera con los valores al cuadrado.
  
  	(x*x) + (y*y) + (z*z) =C
        si x= 1, y=2 y C=10000
        z=+- raiz_cuadrado(9,995)
        z = +- 99.97
        Redondeando: z = +- 100

  Así que solo será necesario tener tres for anidados:
  
  ```c++
  	for(a=-100;a<=100;a++)
	      for(b=-100;b<=100;b++)
	            for(c=-100;c<=100;c++)
                        if( a!=b && b!=c && a!=c && (a+b+c==A && a*b*c==B && ((a*a)+(b*b)+(c*c))==C) )
                                {
                                    if(sol<1){
                                        printf("%d %d %d\n",a,b,c);
                                        sol++;
                                    }
                                }
  ```  
  
  <br>Veamos otro ejercicio...<br>
  <hr>
  <h3 align="left">725 - Division</h3>
  Escribe un programa que encuentre y muestre en pantalla todos los pares de números de 5 dígitos tal que al ser dividos entre ellos nos de como resultado un número N 
  (siendo N un número proporcionado por el usuario).
  <br><br>
  <p align="center">abcde / fghij == N</p>
  
  La particularidad es que cada número debe de constar de dígitos diferentes entre sí.
  
  Ejemplo:
  
  Input:<br>
  62
  
  Output:<br>
  79546 / 01283 = 62<br>
  94736 / 01528 = 62
  
  
  En caso de no existir solución indicarlo en el output como: There are no solutions for _N_.
  
  <h3 align="left">Solución</h3>
  Se observa que debemos de encontrar dos números, siendo sus dígitos diferentes entre sí. Entonces, vamos aplicar fuerza bruta o búsqueda completa y este en sí es 
  la solución más obvia que podemos encontrar ya que la aplicación del método nos dice que debemos de buscar todas las soluciones posibles para encontrar cuál es la 
  correcta y esto es lo que literalmente debemos de hacer para responder el problema, checar todas las combinaciones posibles de 5 dígitos para dos números tal que 
  su división nos de como resultado N.
  
  Y es lo que literalmente vamos hacer, para esto es simplemente pensar en la forma en podemos generar estos números de 5 dígitos, ¿cómo podemos iterar sobre todos
  los dígitos (0 - 9) para proponer 2 números y checar su división y sus dígitos?
  
  Bueno... La forma es simplemente usando un for ya que sabemos o debemos de observar que el menor número que podemos generar con dígitos es 01234 mientras que el
  mayor que podemos generar es 98765, por lo tanto podemos iterar de 01234 a 98765 hasta encontrar dos números tal que su división y dígitos sean diferentes entre sí.
  
  La cuestión es que esto funciona para un solo número por lo tanto debemos de tener dos for anidados que me estén recorriendo de 01234 a 98765
  
  ```c++
    for(a=1234;a<98765;a++)
		            {
		                for(b=1234;b<98765;b++)
		                    {
		                        
                                if(a/b==numero)
                                    {
                                        if(digitosUnicos(b,a))
                                            {
                                                printf("%0.5d / %0.5d = %d\n", a, b, numero);
                                                sol++;  // Contador de soluciones
                                            }
                                    }
                                
		                    }
		            }
  ```
  
  No obstante, hacer esto nos dará un TLE debido a que vamos siempre hacemos el recorrido de lo mínimo hasta lo máximo, y si nos dan más de una entrada esto está más
  que muerto. Pero esto todavía puede ser resuelto con complete search pero ya entra la creatividad (creatividad en matemáticas).
  
  Para esto se debe de hacer la siguiente observación de la división:
  
  <p align="center">abcde / fghij == N <br> Por ende es posible realizar un despeje tal que tengamos lo siguiente<br> abcde == fghij * N</p>
  
  Así que esto se resume bastante debido que gracias a esta observación ya es posible tener que calcular un solo número tal que al multiplicarse por el N que es el
  número objetivo se deberá de conseguir el número abcde, por ende simplemente quedará:
  
  <ol>
  <li>Generar el número fgihj.</li>
  <li>Comprobar que ambos números tengan dígitos diferentes.</li>
  </ol>
  
  ```c++
  for(b=1234;b<98765;b++)
		            {
		                a = b*numero;   // Al parecer, aquí se hace que sea a lo mucho 5 dígitos por número.
		                
		                
		                //Ahora checar si los dígitos de cada número son únicos.
                        if(numeroUnico(b,a))
                            {
                                printf("%0.5d / %0.5d = %d\n", a, b, numero);
                                sol++;
                            }
                        
		            }
  ```
  
  De aquí es fácil observar que no es posible obtener una solución si la cantidad de soluciones es 0.
  
  
  <h2 align="center">Conclusiones</h2>
  Podemos deducir que en realidad no existe una camino como tal a seguir, sino que es simplemente una forma de realizar los problemas y obtener soluciones, por lo 
  tanto debemos de tener en cuenta que no hay una ruta en sí ya escrita o una estructura por la cual empezar, pero sí tenemos la idea de que se debe de explorar todas
  las posibles soluciones por medio de for anidados (o un solo for) para después realizar su comprobación.
  
  Sin embargo, será necesario tener en cuenta su complejidad debido a que será obtendremos complejidades altas sí o sí porque estamos explorando TODO, así que debemos
  de tener en cuenta lo siguiente:
  <ul>
    <li>El tamaño de entrada de cada variable, la cual deberá de ser pequeña.</li>
    <li>Si se hace varias solicitudes en una misma entrada.</li>
    <li>La cantidad de segundos que tendrá el programa.</li>
  <ul>
  
  Y esto es el precio a pagar por tener un algoritmo que siempre nos dará la respuesta correcta...
</p>

