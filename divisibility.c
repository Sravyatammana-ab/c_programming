#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        int c=0;
        scanf("%d %1d",&a,&b);
        while(1){
            if(a%b == 0){
                printf("%d",c);
                break;
            }
            else{
                c++;
                a++;
            }
        }
        
    }
    return 0;
}
/* optimized one 
#include<stdio.h>
int main(){
    int t;
    long long a,b,x;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&a,&b);
        x=a%b;
        if(x==0){
            printf("%d\n",0);
        }
        else{
            printf("%lld\n",b-x);
        }
        
    }
    return 0;
}







