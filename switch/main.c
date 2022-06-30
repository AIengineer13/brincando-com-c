#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entra com o numero: ");
    scanf("%d", &a);
    switch(a){

case 1:
    printf("rotulo 1\n");
    break;
case 2:
    a = 3 * a;
    printf("rotulo 6, apos 2 \n");
    switch (a){
case 6:
    printf("rotulo 8, apos 2\n");
    break;
case 8:
    printf(" rotulo 8, apos 2\n");



    }
    printf("rotulo 2\n");
    break;
    default:
    printf("rotulo default \n");
    }
    printf("fim \n");
    return 0;
}
