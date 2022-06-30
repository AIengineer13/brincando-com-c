#include<stdio.h>
#include<stdlib.h>

int main(){
char y[30];
int x,z;

printf("=== Menu ===\n");
printf("4,6 Nome \n");
printf("3,5 Numero  \n");
printf("sua escolha: ");
scanf("%d", &x);

switch(x){

case 4:
case 6:
    printf("entra com o nome:  ");
    scanf("%s",&y);
    printf("O seu  nome e: %s",y);
    break;
case 3:
case 5:
    printf("entra com o numero: ");
    scanf("%d",&z);
    printf(" O seu numero e: %d",z);
    break;

}
printf("\nprograma terminanado");
}
