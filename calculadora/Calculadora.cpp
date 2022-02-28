#include <iostream>
main ()
{
    int x1, x2, res;
    int op;
        printf("-------Calculadora-----\n");
        printf("-----[1]Suma-----------\n");
        printf("-----[2]Resta----\n");
        printf("-----[3]Multiplicacion---\n");
        printf("-----[4]Divicion---------\n");

        printf("Que Operacion Realizara?\n");
        scanf("%d", &op);

        switch(op)
            {
            case 1:
                printf("Ingrese el Primer Numero: ");
                scanf("%d", &x1);
                printf("\nIngrese el Segundo Numero: ");
                scanf("%d", &x2);
                res = x1+x2;
                printf("\nResultado = %d", res);
                break;
            case 2:
                printf("Ingrese el 1er Numero: ");
                scanf("%d", &x1);
                printf("\nIngrese el 2do Numero: ");
                scanf("%d", &x2);
                res = x1-x2;
                printf("\nResultado = %d", res);
            case 3:
                 printf("Ingrese el Primer Numero: ");
                scanf("%d", &x1);
                printf("\nIngrese el Segundo Numero: ");
                scanf("%d", &x2);
                res = x1*x2;
                printf("\nResultado = %d", res);
            case 4:
                 printf("Ingrese el Primer Numero: ");
                scanf("%d", &x1);
                printf("\nIngrese el Segundo Numero: ");
                scanf("%d", &x2);
                res = x1/x2;
                printf("\nResultado = %d", res);
            }
            printf("\n\n");
            system("pause");
}
