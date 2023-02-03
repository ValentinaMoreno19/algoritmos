#include <iostream>
#include <conio.h>
#include  <cmath>
using namespace std;




int main()
{ 
    int dim,i,j,aux,L,R,m,T;
    cout<<"dimension";
    cin>>dim;
    int v[dim];
    for(i=0;i<dim;i++)
    {
        v[i]=rand()%100;
        cout<<"["<<v[i]<<"]";
    }
    for(i=0;i<dim;i++)
    {
        for(j=i+1; j<dim;j++)
        {
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
cout<<"\nVector ordenado de menor a mayor";

for(i=0;i<dim;i++)
{
    cout<<v[i]<<",";

}
L=0;
R=dim-1;
cout << "numero a buscar : ";
cin >> T;

m=0;

    while (v[m]!= T)
    {
        m=floor((L+R)/2);
        if (L>R)
       {
        cout << "No se encontro el numero en el vector";
        break;
       }
  
        else if (v[m] < T)
       {
        L=m+1;
       }
        else if (v[m] > T)
       {
        R=m-1;
       }

       else if ( v[m] = T)
        {
            cout<<"El numero se encuentra en la posicion: " << m;
            break;
        }
}
}
