#include <stdio.h>

int main() {
   int lim,bob;
   scanf("%d %d",&lim,&bob);
   int year=0;
   while(lim<=bob){
       lim*=3;
       bob*=2;
       year++;
   }
   printf("%d",year);
   return 0;
}