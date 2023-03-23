//Ejercicio 5: Punteros y Arrays
#include <stdio.h>

int main()
{
    int numeros[10];
    int i, valor;
    for (i = 0; i < 10; i++) //Ciclo para almacenar los valores en el Arrays
    {
        printf ("Ingresa el valor para la posicion %d: ", i+1); 
        scanf ("%d", &valor); //Almacenamos temporalmente el recibido
        numeros[i] = valor; //Vamos ingresando dicho valor en la localidad que va acorde al ciclo
    }
    printf("\n");
    printf ("El arreglo es: ");
    
    //Ciclo para mostrar los valores de Array
    for (i = 0; i < 10; i++)
    {
        printf ("%d ", numeros[i]); 
    }
    printf("\n");
    printf ("El nuevo arreglo es: ");
    int *Ppuntero = &numeros[0]; //El puntero apunta al primer elemento del Array
    for (i = 0; i < 10; i++) //Ciclo para ir mostrando los valores del nuevo array
    {
       int muestra = *(Ppuntero + i); //Le ingresamos a muestra variable muestra el valor del puntero + i para que vaya incrementando en 1 por cada ciclo
        muestra *= 2; //Multiplicamos por dos cada valor del array que mostraremos en pantalla
        printf ("%d ", muestra); //Mostramos el valor del array
    }
}
