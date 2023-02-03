#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    float v, ang, yo, xo, dt1, dt2, x, y, theta, g = 9.8, t1,t2,T,r,Vx,Vy;
    int n, i;
    cout << "Este programa entrega los valores asociados al recorrido de una particula, en razon de un tiro parabolico, sobre una trayectoria determinada bajo valores iniciales.\n";
    cout<< "\n";
    cout<< "\n";
    cout << "1)Ingrese la posicion inicial de la particula. \n" << "Posicion en X (m): " ; cin >> xo; cout << "Posicion en Y (m): "; cin >> yo;
    cout<< "\n";
    cout << "2)Ingrese la velocidad inicial (m/s): "; cin >> v;
    cout<< "\n";
    cout << "3)Ingrese el angulo de inclinacion (grados): "; cin >> ang;
    cout<< "\n";
    cout << "4)Ingrese la cantidad de datos (puntos) a obtener sobre la trayectoria: "; cin >> n;
    cout<< "\n";

    theta = ang * M_PI/180;
    t1 = (v * sin(theta))/g;
    dt1 = (2*t1)/n;
    t2 = ((v * sin(theta))+(sqrt(v*sin(theta)*v*sin(theta))+(2*yo*g)))/g;
    dt2 = (t2)/n;
    T=(2*t1);
    r=(sqrt((v*sin(theta)*v*sin(theta))+(2*yo*g)));
    
    
    float X[n], Y[n];

    if (yo == 0)
    {
        for (i=0; i < n; i++)
        {
            X[i] = xo + (v * cos(theta))*i*dt1;
            Y[i] = yo +  (v * sin(theta))*(i * dt1) - (g * (i * dt1) * (i * dt1))/2;
            Vx=v*cos(theta);
            Vy=(v*sin(theta))-(g*(i*dt1));
            cout<< "Punto "<<i;
            cout<< "\n";
            cout << "x: " << X[i] << " m\n";
            cout << "y: " << Y[i] << " m\n";
            cout << "Vx: " << Vx << " m/s\n";
            cout << "Vy: " << Vy << " m/s\n";
            cout<< "\n";
        }
        cout<< "\n";
        
        cout << "Tiempo total de vuelo: " << T << " s\n";
    }
    else
    {	y=yo;
        for (i=0; i < n; i++)
        
        while (y>0)
        {
            X[n] = xo + (v * cos(theta))*(i * dt2);
            y = yo +  (v * sin(theta))*(i * dt2) - (g * (i * dt2) * (i * dt2)) / 2;
            Y[n] = yo +  (v * sin(theta))*(i * dt2) - (g * (i * dt2) * (i * dt2)) / 2;
            Vx=v*cos(theta);
            Vy=(v*sin(theta))-(g*(i*dt2));
            t2 = ((v * sin(theta))+(r))/g;
            cout<< "Punto"<<i;
            cout<< "\n";
            cout << "x: " << X[n] << " m\n";
            cout << "y: " << Y[n] << " m\n";
            cout << "Vx: " << Vx << " m/s\n";
            cout << "Vy: " << Vy << " m/s\n";
            cout<< "\n";
            
            i = i + 1;
            
        }
        cout<< "\n";
        cout << "Tiempo total de vuelo: " << t2 << " s\n";
    }	

    return 0;
}


