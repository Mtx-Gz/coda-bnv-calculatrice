#include <stdlib.h>
#include <stdio.h>

int main()
{
int nb1;
int nb2;
char symb;
int result;
    printf("Bonjour, choisir le type d'operation : +, -, *, /, %% :");
    scanf(" %c",&symb);
    printf("Choisir un premier nombre :");
    scanf("%d",&nb1);
    printf("Choisir un deuxieme nombre :");
    scanf("%d",&nb2);
    if (symb == '+')
        {printf("Addittion\n");
        result = nb1 + nb2;
        printf("%d %c %d = %d\n", nb1, symb, nb2, result);
        }
    else if (symb == '-')
        {printf("Soustraction\n");
        result = nb1 - nb2;
        printf("%d %c %d = %d\n", nb1, symb, nb2, result);
        }
    else if (symb == '*')
        {printf("Multiplication\n");
        result = nb1 * nb2;
        printf("%d %c %d = %d\n", nb1, symb, nb2, result);
        }
    else if (symb == '/')
        {printf("Division\n");
            if (nb2 == 0)
                {
                printf("division par zero impossible\n");
                return(1);
                }
        result = nb1 / nb2;
        printf("%d %c %d = %d\n", nb1, symb, nb2, result);
        }
    else if (symb == '%')
        {printf("Modulo\n");
            if (nb2 == 0)
                {
                printf("modulo par zero impossible\n");
                return(1);
                }
        result = nb1 % nb2;
        printf("%d %c %d = %d\n", nb1, symb, nb2, result);
        }
    else
        {
        printf("Erreur, symbole non reconnu\n");
        }
    return(0);
}