#include <stdio.h>
int sum(int n){
    int s=0;
    while(n!=0){
        int a=n%10;
        s+=a;
        n=n/10;
    }
    return s;
}
int main() {
    int n;
    scanf("%d",&n);
    int x=sum(n);
    if(n%x==0){
        printf("%d a harshad no.\n",n);
        printf(" sum is %d",x);
    }
    else{
        printf("%d is not a harshad no.\n",n);
        printf("%d",-1);
    }

    return 0;
}