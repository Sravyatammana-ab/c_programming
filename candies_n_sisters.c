#include <stdio.h>

int main() {
  int t;
   long long c;
  scanf("%d",&t);
  for(int i=0;i<t;i++){
      scanf("%lld",&c);
      if(c<=2){
          printf("0\n");
      }
      else{
          int k=1;
          printf("%lld\n",(c-k)/2);
      }
      
      
  }
  return 0;
}