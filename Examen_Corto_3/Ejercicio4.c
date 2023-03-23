//Ejercicio 4: Librerías
#include <stdio.h>
#include "Libreria.h"

int main()
{
    float a, b;
    float res[6];
    printf("Ingrese dos números separados por un espacio para operar: ");
    scanf ("%f%f", &a, &b);
    
    res[0] = PI();
    res[1] = suma(a,b);
    res[2] = resta(a,b);
    res[3] = multiplica(a,b);
    res[4] = divida(a,b);
    
    printf("\nResultados:\n PI: %.5f\n Suma: %.2f\n Resta: %.2f\n Multiplicación: %.2f\n División: %.2f\n", res[0], res[1],res[2],res[3],res[4]);
}