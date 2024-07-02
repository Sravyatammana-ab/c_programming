#include <stdio.h>
int perfect(int a){
    int s=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            s+=i;
        }
    }
    return s;
}
int main() {
    int n;
    scanf("%d",&n);
    int p=perfect(n);
    if (p==n){
        printf(" its perfect no.");
    }
    else{
        printf("not perfect no.");
    }
    return 0;
}