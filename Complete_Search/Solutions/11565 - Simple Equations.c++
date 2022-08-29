#include <bits/stdc++.h>
 
using namespace std;

		//Algunos macros para ayudar
#define endl		'\n'

	//Definiciones de ciclos for: crementar, incrementar
#define FO(i, b)	for(int i = (a); i < (b); i++)
#define FOR(i, a, b)	for(int i = (a); i < (b); i++)
#define rFOR(i, a, b)	for(int i = (a); i > (b); i--) //a es nuestro valor de inicio

#define pint(x)			printf("%d\n",x);
#define pll(x)			printf("%lld\n",x); //imprimir un long long
#define si(x)			scanf("%d",&x);	    //Escaneo de un entero
#define sl(x)			scanf("%lld",&x);
#define TR(v, arr)      for(auto& (v) : (arr)) //Es como un for each


				//TYPEDEF YA NO ES MACROS
typedef vector<int> vi;
typedef vector<long long> vll;

/*
    Una forma de conseguir la solución sería a través de examinar y hacer despejes
    Las condiciones son que los números de x,y,z deben ser diferentes entre sí, entonces para resolver las
    ecuaciones es posible ver lo siguiente
    Nota:
        A,B,C (diferentes entre ellos) pueden ir de 1 a 10000
        Entonces en lñas soluciones como está implicado la multiplicación y una elevación al cuadrado, es 
        posible decir que no puede tomar valores de 0, pero sí valores negativos
        x+y+z+ = A
        x*y*z = B
        (x*x) + (y*y) + (z*z) =C
        si x= 1, y=2 y C=10000
        z=+- raiz_cuadrado(9,995)
        z = +- 99.97
        Redondeando: z = +- 100
        
*/

int main()
	{
	    int n;  cin>>n;
	    int A,B,C;
	    for(int i=0;i<n;i++)
	        {
	            int sol=0;
	            cin>>A>>B>>C;
	            int a,b,c;
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
                        
                if(sol==0)  printf("No solution.\n");
	        }
		return 0;
	}
	
