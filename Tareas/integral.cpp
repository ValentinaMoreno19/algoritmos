#include  <cmath>
#include  <stdio.h>


// Evaluar la integral 1/x + sen(2x) dx en el intervalo [2,6]

float f(float xi)

{
    return((1/xi)+sin(2*xi));

}
 main()
{
     int n, num_rect,i;
     float a=2 , b=6, dx ,suma=0;
     printf("numero de rectangulos n:");
     scanf("%d",&num_rect);
     n=1;
     for(n=1; n<=num_rect;n++)
     {
        dx= (b-a)/n;
        for (i=1; i<=n; i++)
        { 
            suma= suma+ f(a+i*dx)*dx;

        }
        printf("\nLasuma de riemann con %d rectangulos es :%.4f",n,suma);
        suma=0;

    }



}