#include <iostream>


using namespace std;

int main(){
    int na,ma,nb,mb,i,j,k;

    cout << "numero de filas en matriz a:";
    cin>>na;
     cout << "numero de columnas en matriz a:";
    cin>>ma;
     cout << "numero de filas en matriz b:";
    cin>>nb;
     cout << "numero de columnas en matriz b:";
     cin>>mb;
    
    int A[na][ma], B[nb][mb], C[na][mb];

    if (na==mb){
      

         cout <<"introduzca datos de la matriz A"<<endl;
         for(i=0;i<na;i++)
             for(j=0; j<ma;j++){

            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
         }
        cout <<"introduzca datos de la matriz B"<<endl;
         for(i=0;i<nb;i++)
             for(j=0; j<mb;j++){

            cout<<"b["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
         }

         for(i=0;i<na;i++)
            for(j=0; j<mb;j++){

               C[i][j]=0;
               for(k=0;k<ma;k++)
               C[i][j]+=A[i][j]*B[k][j];
            }

            cout<<endl;

            for(i=0;i<na;i++)
            for(j=0;j<mb;j++)
            cout<< C[i][j]<<endl;

    }
    
else  cout<<"no se puede realizar la multiplicacion de matrices"<<endl;

 }
