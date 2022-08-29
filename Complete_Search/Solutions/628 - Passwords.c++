#include <bits/stdc++.h>
using namespace std;
// Explicación en github.

vector<string> palabra;
vector<string> reglas;

//int digito=0;

void backtrack(int caracter, int p, string r, string &sol)
    {
        // Caso base, es recorrer todas las reglas
        if(caracter == r.size())
            {
                cout<<sol<<endl;
                
                return;
            }
        
        if( r[caracter]== '#')
            {
                // Para cada palabra:
                int longitud = sol.size();  //Longitud sin la palabra agregada.
                for(int i=0;i<palabra.size();i++)
                    {
                        sol+=palabra[i];
                        backtrack(caracter+1,p,r,sol);
                        
                        sol.resize(longitud);//Le redimensiono para quitar esa palabra y agrega la otra.
                    }
            }
        else
            {
                if( r[caracter]== '0')
                    {
                        
                        for(int digito=0;digito<10;digito++)
                            {
                                sol+=to_string(digito);
                                backtrack(caracter+1,p,r,sol);
                                sol.pop_back();
                            }
                        
                    }
            }
    }

int main()
    {
        int n, r;
        while(cin>>n)   // Cantidad de palabras en el diccionario
            {
                string aux; 
                for(int i=0;i<n;i++){
                    cin>>aux;
                    palabra.push_back(aux);
                }
                
                printf("--\n");
                
                //Procesar cada regla para cada palabra:
                cin>>r;     
                for(int i=0;i<r;i++){
                    cin>>aux;
                    string sol = "";
                    backtrack(0,0,aux,sol);
                }
                
                palabra.clear();
                reglas.clear();
            }
                
        return 0;
    }
