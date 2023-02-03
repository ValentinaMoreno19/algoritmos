#include <iostream>

using namespace std;

int main()
{
    float promedio, n, z=0, suma=0; 
    int i;
    
    cout<< "Cuantos numeros quiere pomediar: "; cin>> n;

    for(i=1; i <=n; i++) 
    {
        cout<< " Valor de la variable "<<i<<":"; cin>> z; 
        suma = suma+=z ;
    }
    promedio = suma/n; 

    cout<<"Resultado del promedio"<<promedio<< endl;
    
    return 0;
}