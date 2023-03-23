//Ejercicio 2: Solicitar datos
#include <stdio.h>
int main(){
    /*int a, b, suma;
    printf ("Ingrese dos números enteros separados por un espacio: ");
    scanf("%d%d", &a, &b);
    suma = a + b;
    printf("La suma de %d y %d es %d\n", a, b, suma);
    return 0;*/
    float Fahren, Celsius;
    printf ("Ingrese la temperarura en grados Fahrenheit: ");
    scanf ("%f", &Fahren);
    Celsius = (Fahren - 32)/1.8;
    printf("La temperatura de %f °F es igual a %f °C", Fahren, Celsius);
    return 0;
}
