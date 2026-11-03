#include <stdlib.h>
#include <stdio.h>

int main()
{
int nb1;
int nb2;
int symb;
    printf("Bonjour, choisir le type d'operation : +, -, *, /, %% :");
    scanf("%d",&symb);
    printf("Choisir un premier nombre :");
    scanf("%d",&nb1);
    printf("Choisir un deuxieme nombre :");
    scanf("%d",&nb2);
    if (symb == '+')
        {printf("Addittion\n");
        }
    else if (symb == '-')
        {printf("Soustraction\n");
        }
    else if (symb == '*')
        {printf("Multiplication\n");
        }
    else if (symb == '/')
        {printf("Division\n");
        }
    else if (symb == '%')
        {printf("Modulo\n");
        }
return(0);
}