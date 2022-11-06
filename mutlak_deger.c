#include <stdio.h>
// klavyeden girilen tam sayının mutlak değerini bul

int main() 

{
 
 int x;
 
 printf("mutlak degerini bulmak istediginiz sayiyi girin: ");
 scanf("%d",&x);

 if(x >= 0)
 {
  printf("|%d| = %d",x,x);
 }
 
 else
 {
  printf("|%d| = %d",x,-1*x); 
 }
 
 return 0;

}