/*Kin Max Piamolini Gusmão    Turma 490    LAPRO I     kin.gusmao@acad.pucrs.br*/

#include <stdio.h>

int main (void)
{
    int x, i, j;

    printf ("\nDigite a medida do lado do quadrado: ");
    scanf ("%d", &x);

    for (j = 1; j <= x; j++)
    {
        for (i = 1; i <= x; i++)
            if (i == 1 || i == x)
                printf (j == 1 || j == x ? "+" : "|");
            else
                printf (j == 1 || j == x ? "-" : " ");
        printf ("\n");

    }

    return 0;
}
