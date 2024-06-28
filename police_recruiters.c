
#include <stdio.h>

int main()
{
    int n,p=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       int e;
       scanf("%d",&e);
       if(e==-1){
           if(p>0){
               p--;
           }
           else{
               c++;
           }
       }
       else{
           p=p+e;
       }
    }
    printf("%d",c);
    
    return 0;
}