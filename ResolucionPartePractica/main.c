#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y
muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba el país y los
recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada.
*/

/*
Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/

/*
Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres
como parámetro y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
*/

typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;

void actualizarRecuperados( ePais pais, int recuperadosDelDia );
void invertirCadena( char cadena[] );
void ordenarCaracteres( char cadena[] );

int main()
{
    ePais paisX = { 23, "AlgunPais", 25, 500, 12};
    char cadenaRandom[] = "RandomMode";

    actualizarRecuperados( paisX, 25 );

    printf("Recuperados: %d.\n", paisX.recuperados );

    invertirCadena( cadenaRandom );

    printf("CADENA INVERTIDA: %s\n", cadenaRandom);

    ordenarCaracteres( cadenaRandom );

    printf("CADENA ORDENADA: %s\n", cadenaRandom);

    return 0;
}

void actualizarRecuperados( ePais pais, int recuperadosDelDia )
{

    pais.recuperados = recuperadosDelDia;

}

void invertirCadena( char cadena[] )
{
    char aux;
    int contador = 0;
    int len = strlen( cadena );
    int cadenaAux[len];

    for( int i=len; i>0; i--)
    {

        cadenaAux[contador] = cadena[i];
        contador++;

    }

    strcpy(cadena, cadenaAux);
}

void ordenarCaracteres( char cadena[] )
{
    char aux;

    for(int i=0; i < strlen(cadena)-1; i++)
    {
        for(int j=i+1; j<strlen(cadena); j++)
        {
            if( cadena[i] > cadena[j] )
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }
        }
    }

}
