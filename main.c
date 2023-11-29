#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int fil;
    int col;

    // Solicitar al usuario las dimensiones de las matrices
    printf("Ingrese el número de filas: ");
    scanf("%d", &fil);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &col);

    int matriz1[fil][col];
    int matriz2[fil][col];

    printf("matriz1\n");
    for (int i = 0; i < fil; ++i)
    {
    
        for (int j = 0; j < col; ++j)
        {
            matriz1[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
            printf("%d\t", matriz1[i][j]);
        }
        printf(" \n");
    }
         printf("matriz2\n");
    for (int i = 0; i < fil; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            matriz2[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("Suma de las matrices:\n");
    for (int i = 0; i < fil; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d\t", matriz2[i][j] + matriz1[i][j]); // Función para sumar dos matrices y almacenar el resultado en una tercera matriz
        }
        printf("\n");
    }

    return 0;
}
