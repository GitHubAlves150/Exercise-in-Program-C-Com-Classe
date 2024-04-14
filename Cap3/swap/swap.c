#include <stdlib.h>
#include <stdio.h>

void getnumber(int *num_1, int *num_2);
void swap(int *num_1, int *num_2);
void show(int num_1, int num_2);

int main()
{
    int number_one =0;
    int number_second = 0;

    getnumber(&number_one, &number_second);
    printf("getnumberdentro da main: %d-%d", number_one, number_second);
    swap(&number_one, &number_second);
    printf("swap dentor da main: %d-%d", number_one, number_second);
    show(number_one, number_second);

    return 0;
}

void getnumber(int *num_1, int *num_2)
{
   int *n, *m;
    printf("DIGITE O PRIMEIRO NUMERO:" );
    scanf("%d", &n);
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &m);
*num_1=&n;
*num_2=&m;
printf("getnumber: %d-%d", n, m);

   
}

void swap(int *num_1, int *num_2)
{
    int *auxiliar = NULL;
    auxiliar = num_1;
    num_1 = num_2;
    num_2 = auxiliar;
    printf("swap: %d, %d\n\n\n", *num_1, *num_2);
}

void show(int num_1, int num_2)
{
    printf("%d-%d", num_1, num_2);
}
