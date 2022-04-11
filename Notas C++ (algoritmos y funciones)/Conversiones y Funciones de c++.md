<h2>min_element</h2>

<hr>

<h2>caracter a string</h2>
int digit = (int)car - '0';
Creo que car es el nombre de la variable 

<hr>

<h2>Ordenar un vector de pares con respecto al segundo elemento</h2>
struct sort_pred {
 bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) 
 	{ 
	 return left.second < right.second; 
	}
}; //-->> Esto va a fuera del main para realizar la comparación;_

sort(v.begin(), v.end(), sort_pred()); //->> Esto va en el main;

<hr>

<h2>Sumar un rango de números dentro de un vector</h2>
accumulate

<hr>

<h2>Recordar que el formato de entrada es posible de manipular con un scanf</h2>
Por ejemplo, para guardar un decimal de un solo decimal o 2, etc, una manera fácil de manipular es
    int entero, decimales;
    scanf("%d.%d",&entero,&decimales);
    cout<<entero<<"."<<decimales;
Así me evito trabajar con decimales y tener que lidiar con errores raros.

<hr>

<h2>Lectura cuando la cantidad de números en la entrada van variando</h2>

1 1
2 3 48
3 89 1 1
4 74 2 9 3
5 11 1 1 10 

Code:
	int k;      // Test cases
        scanf("%d\n",&k);
        for(int i =0;i<k;i++)
            {
                vector<int> numeros;
                string linea;
                getline(cin, linea);
                istringstream str(linea);
                int n;
                while(str >> n)
                    numeros.push_back(n);
                for(auto it: numeros)
                    cout<<it<<" ";
                cout<<"\n";
            }

<hr>

<h2>Lectura cuando se tiene una cantidad desconocida de números en una sola línea</h2>

Example:5 11 1 1 10 
	
Code:
	vector<int> numeros;
        string linea;
        getline(cin, linea);
        istringstream str(linea);
        int n;
        while(str >> n)
            numeros.push_back(n);
        
        for(auto it: numeros)
            cout<<it<<" ";

<hr>

<h2>Uso de mod</h2>
El uso sería colocar: 79546 mod 10 el resultado es que nos va a regresar el primer dígito de la derecha
Si hicieramos lo siguiente:  79546 mod 100 el resultado es: 46.
La cantidad de ceros es nos dice la cantidad de dígitos (desde la derecha) que nos va a regresar 
















