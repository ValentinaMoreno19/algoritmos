#include <iostream> 

using namespace std;

int main(void){

    int x,y;

    cout<<"Primer numero:" << endl;
    cin>>x;

     cout<<"Segundo numero:" << endl;
    cin>>y;


    bool MCD= false;

    if (x>0 && y>0 &&  x!=y ){
        
        int aux=x;
        x=y;
        y=aux;
    }

    int i=x;
    while (!MCD&& i>=1){

        if (x%i==0 &&y%i==0){

            cout<<" El maximo comun multiplo es"<<i<<endl;
            MCD=true;
        }

        else {
            i--;
        }

    }
   

}