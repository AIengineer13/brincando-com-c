 #include<stdio.h>
 #include<stdlib.h>

 int main(){

 int N,R;

 scanf("%d",&N);

 do{

    R = R + 1;

 }while( R * R > N);
 R = R - 1;

 printf("Inteiro aproximado da raiz quadrada de %d",N ,"e %d", R) ;


 }
