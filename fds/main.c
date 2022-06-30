#include<stdio.h>

int main(void){
int num = -1;
while((num <= 0) || (num >= 230)){
printf("Digite 0 < numero < 230");
scanf("%d",&num);
}
printf("2 * %d = %d \n ", num, (2 * num));
printf("fim\n");
return 0;

}
