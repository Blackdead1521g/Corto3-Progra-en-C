//Ejercicio 3: Serie de Fibonacci
#include <stdio.h>
int main(){
    /*int i;
    for (i = 1; i <= 10; i++){
        printf ("%d", i);
    }*/
    int N, i, a, b, c;
    a = 0;
    b = 1;
    printf ("Ingrese la cantidad de términos que necesita de la serie de Fibonacci: ");
    scanf ("%d", &N);
    
    for (i = 0; i <= N; i++){
        c = a + b;
        a = b;
        b = c;
        printf ("%d\t", c);
    }
    return 0;
}
