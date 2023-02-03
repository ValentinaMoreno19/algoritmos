#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;
int main()
{
    int n,z,k,casos;
    casos=0;
    cout << "num casos prueba :";
    cin >> casos;

    float num[casos];
    float ent,temp;
    int result[casos];
     for (int i=0; i<casos; i++)
    {
        cout << "Caso de prueba " << i << ": ";
        cin >> n;
        num[i]= n;
    
        ent = sqrt(num[i]);
        z = ent;
       
            k=1;
            while (ent-z!=0)
            {
                k++;
                temp=num[i]*k;
                ent = sqrt(temp);
                z = ent;
            }
           
            result[i]=k;       
    }
cout << " Salida: " << endl;
for (int i=0; i<casos; i++)
{
    cout << result[i] << endl;
}

}