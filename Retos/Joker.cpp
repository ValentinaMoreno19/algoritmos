#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;



int main()
{
    int numcasos, boleta, i, cifra,j, numboleta,pierde,gana;

    cout << "Numero de casos de prueba: "; cin >> numcasos;
    float correcta[numcasos][7], boletasvec[numcasos][7];

    for ( i = 0; i <numcasos; i++)
    {
        cout << "Ingrese los numeros correctos del sorteo" << endl;
        cin >> cifra;

         while(cifra>9999999)
        {
            cout << "No valido" << endl << "Ingrese los 7 digitos correctos del sorteo" << endl;
            cin >> cifra;
        }

        for (j=7 ; j>0; j--)
        {
            numboleta = cifra%10;
            cifra = cifra/10;
            correcta[i][j] = numboleta;
        }

        }
            cout << "Ingrese los numeros de su boleta" << endl;
            cin >> boleta;

        for ( j = 7; j >0; j--)
        {
            numboleta = boleta%10;
            boleta= boleta/10;
            boletasvec[i][j] = numboleta;
        
        }
     for (i = 0; i < numcasos; i++)
    {cout << "Numeros del sorteo ordenados " << i+1 << endl;
        for ( j = 0; j < 7; j++)
        {
            cout << correcta[i][j];
        }
        cout << endl;

        cout << "Numeros del boleto ordenados " << i+1 << endl;
         for ( j = 0; j < 7; j++)
        {
            cout << boletasvec[i][j];
        }

        cout << endl;
    }
    for (i = 0; i < numcasos; i++)
    {
        gana = 0;
        for (j = 0; j < 7; j++)
        {
            if (correcta[i][j] == boletasvec[i][j])
            {
                gana = gana + 1;
            }    
        }
        if (gana == 7)
        {
            cout <<"GANA" <<endl;
        }
        else{
            cout << "PIERDE" ;
        }
        pierde = 0;
    }




}